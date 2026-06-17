/* Batch Import Commandlet for JsonAsAsset — Moria Replication Project */

#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "BatchImportCommandlet.generated.h"

/**
 * Commandlet that batch-imports FModel JSON exports via JsonAsAsset.
 *
 * Usage:
 *   UE4Editor-Cmd.exe Moria.uproject -run=BatchImport -dir="C:/path/to/Exports" [-filter=DataTable] [-save]
 *
 * Parameters:
 *   -dir       Root directory containing FModel JSON exports (required)
 *   -filter    Only import JSON files whose Type field contains this string (optional)
 *   -save      Auto-save imported assets after creation (optional)
 *   -project   Game project name for path resolution, default "Moria" (optional)
 */
UCLASS()
class JSONASASSET_API UBatchImportCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UBatchImportCommandlet();

	virtual int32 Main(const FString& Params) override;

private:
	void CollectJsonFiles(const FString& Directory, TArray<FString>& OutFiles);
	bool MatchesFilter(const FString& FilePath, const FString& Filter);
};
