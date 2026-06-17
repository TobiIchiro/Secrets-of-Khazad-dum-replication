/* Batch Import Commandlet for JsonAsAsset — Moria Replication Project */

#include "Commandlets/BatchImportCommandlet.h"
#include "Importers/Constructor/ImportReader.h"
#include "Settings/JsonAsAssetSettings.h"
#include "Settings/Runtime.h"
#include "Utilities/EngineUtilities.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"

/* SEH wrapper — must be in a separate function because MSVC forbids __try in
   functions that have C++ objects with destructors (TArray, FString, etc.) */
static bool SafeImportJson(TArray<TSharedPtr<FJsonValue>>& DataObjects, const FString& FilePath, DWORD& OutExceptionCode)
{
	OutExceptionCode = 0;
	__try
	{
		IImporter* Importer = nullptr;
		bool bResult = IImportReader::ReadExportsAndImport(DataObjects, FilePath, Importer, true);
		return bResult && Importer != nullptr;
	}
	__except(EXCEPTION_EXECUTE_HANDLER)
	{
		OutExceptionCode = GetExceptionCode();
		return false;
	}
}

UBatchImportCommandlet::UBatchImportCommandlet()
{
	IsClient = false;
	IsEditor = true;
	IsServer = false;
	LogToConsole = true;
}

int32 UBatchImportCommandlet::Main(const FString& Params)
{
	TArray<FString> Tokens;
	TArray<FString> Switches;
	TMap<FString, FString> ParamMap;
	ParseCommandLine(*Params, Tokens, Switches, ParamMap);

	/* -dir parameter (required) */
	FString Directory;
	if (!ParamMap.Contains(TEXT("dir")))
	{
		UE_LOG(LogJsonAsAsset, Error, TEXT("BatchImport: -dir parameter is required. Usage: -run=BatchImport -dir=\"C:/path/to/Exports\""));
		return 1;
	}
	Directory = ParamMap[TEXT("dir")];
	FPaths::NormalizeDirectoryName(Directory);
	Directory = Directory.Replace(TEXT("\\"), TEXT("/"));

	if (!FPaths::DirectoryExists(Directory))
	{
		UE_LOG(LogJsonAsAsset, Error, TEXT("BatchImport: Directory does not exist: %s"), *Directory);
		return 1;
	}

	/* -filter parameter (optional) */
	FString Filter;
	if (ParamMap.Contains(TEXT("filter")))
	{
		Filter = ParamMap[TEXT("filter")];
	}

	/* -project parameter (optional, default "Moria") */
	FString ProjectName = TEXT("Moria");
	if (ParamMap.Contains(TEXT("project")))
	{
		ProjectName = ParamMap[TEXT("project")];
	}

	/* -save switch */
	bool bSaveAssets = Switches.Contains(TEXT("save"));

	/* -cloud switch — enable Cloud Server for resolving textures/meshes */
	bool bUseCloud = Switches.Contains(TEXT("cloud"));

	/* Configure JsonAsAsset settings */
	UJsonAsAssetSettings* Settings = GetSettings();
	Settings->AssetSettings.ProjectName = ProjectName;
	Settings->AssetSettings.SaveAssets = bSaveAssets;
	Settings->EnableCloudServer = bUseCloud;
	SavePluginSettings(Settings);

	/* Set the export directory for path resolution */
	GJsonAsAssetRuntime.ExportDirectory.Path = Directory;

	UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Scanning directory: %s"), *Directory);
	UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Project name: %s"), *ProjectName);
	if (!Filter.IsEmpty())
	{
		UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Filter: %s"), *Filter);
	}

	/* Collect JSON files */
	TArray<FString> JsonFiles;
	CollectJsonFiles(Directory, JsonFiles);

	UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Found %d JSON files"), JsonFiles.Num());

	/* Import each file */
	int32 SuccessCount = 0;
	int32 FailCount = 0;
	int32 SkipCount = 0;

	for (int32 i = 0; i < JsonFiles.Num(); i++)
	{
		const FString& FilePath = JsonFiles[i];

		/* Apply filter if specified */
		if (!Filter.IsEmpty() && !MatchesFilter(FilePath, Filter))
		{
			SkipCount++;
			continue;
		}

		FString RelativePath = FilePath;
		RelativePath.RemoveFromStart(Directory + TEXT("/"));

		UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: [%d/%d] Importing: %s"), i + 1, JsonFiles.Num(), *RelativePath);

		/* Deserialize and import — wrapped in SEH to survive ensure/check failures */
		TArray<TSharedPtr<FJsonValue>> DataObjects;
		if (!DeserializeJSON(FilePath, DataObjects))
		{
			UE_LOG(LogJsonAsAsset, Warning, TEXT("BatchImport: Failed to deserialize: %s"), *RelativePath);
			FailCount++;
			continue;
		}

		DWORD ExceptionCode = 0;
		bool bImportOk = SafeImportJson(DataObjects, FilePath, ExceptionCode);

		if (ExceptionCode != 0)
		{
			UE_LOG(LogJsonAsAsset, Error, TEXT("BatchImport: SEH exception importing: %s (code 0x%08X) — skipping"), *RelativePath, ExceptionCode);
		}

		if (bImportOk)
		{
			SuccessCount++;
		}
		else
		{
			UE_LOG(LogJsonAsAsset, Warning, TEXT("BatchImport: Failed to import: %s"), *RelativePath);
			FailCount++;
		}

		/* Periodic GC to prevent memory buildup */
		if ((i + 1) % 50 == 0)
		{
			CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
			UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Progress: %d/%d (success: %d, fail: %d, skip: %d)"),
				i + 1, JsonFiles.Num(), SuccessCount, FailCount, SkipCount);
		}
	}

	/* Save all dirty packages if requested */
	if (bSaveAssets)
	{
		UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Saving all imported assets..."));

		TArray<UPackage*> DirtyPackages;
		for (TObjectIterator<UPackage> It; It; ++It)
		{
			if (It->IsDirty() && !It->HasAnyPackageFlags(PKG_PlayInEditor))
			{
				DirtyPackages.Add(*It);
			}
		}

		for (UPackage* Package : DirtyPackages)
		{
			FString PackageFilename;
			if (FPackageName::TryConvertLongPackageNameToFilename(Package->GetName(), PackageFilename, FPackageName::GetAssetPackageExtension()))
			{
				UPackage::SavePackage(Package, nullptr, RF_Standalone, *PackageFilename);
			}
		}

		UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport: Saved %d packages"), DirtyPackages.Num());
	}

	UE_LOG(LogJsonAsAsset, Display, TEXT("========================================"));
	UE_LOG(LogJsonAsAsset, Display, TEXT("BatchImport Complete"));
	UE_LOG(LogJsonAsAsset, Display, TEXT("  Success: %d"), SuccessCount);
	UE_LOG(LogJsonAsAsset, Display, TEXT("  Failed:  %d"), FailCount);
	UE_LOG(LogJsonAsAsset, Display, TEXT("  Skipped: %d"), SkipCount);
	UE_LOG(LogJsonAsAsset, Display, TEXT("  Total:   %d"), JsonFiles.Num());
	UE_LOG(LogJsonAsAsset, Display, TEXT("========================================"));

	return (FailCount > 0) ? 1 : 0;
}

void UBatchImportCommandlet::CollectJsonFiles(const FString& Directory, TArray<FString>& OutFiles)
{
	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFilesRecursive(OutFiles, *Directory, TEXT("*.json"), true, false);
}

bool UBatchImportCommandlet::MatchesFilter(const FString& FilePath, const FString& Filter)
{
	/* Quick filename check first */
	FString Filename = FPaths::GetBaseFilename(FilePath);
	if (Filename.StartsWith(TEXT("DT_")) && Filter.Equals(TEXT("DataTable"), ESearchCase::IgnoreCase))
	{
		return true;
	}

	/* For non-obvious names, read the JSON Type field */
	FString FileContent;
	if (!FFileHelper::LoadFileToString(FileContent, *FilePath))
	{
		return false;
	}

	/* Quick string search for "Type" field containing the filter */
	return FileContent.Contains(FString::Printf(TEXT("\"Type\": \"%s\""), *Filter)) ||
	       FileContent.Contains(FString::Printf(TEXT("\"Type\":\"%s\""), *Filter));
}
