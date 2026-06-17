#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorContentProxyCatalog.h"
#include "MorDecorationVolumeData.h"
#include "MorInstantiableBreakable.h"
#include "MorPrefabProperties.h"
#include "MorSpawnableAssetCatalog.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSpawnableAssetCatalog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FMorContentProxyCatalog> ProxyCatalogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FMorInstantiableBreakable> Breakables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorPrefabProperties> Prefabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> PrefabAssetPathToName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FMorDecorationVolumeData> BlueprintDecoVolumes;
    
    FMorSpawnableAssetCatalog();
};

