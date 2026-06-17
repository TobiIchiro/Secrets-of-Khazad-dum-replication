#pragma once
#include "CoreMinimal.h"
#include "MorSoftSpawnableAssetPtr.h"
#include "MorZoneRowHandle.h"
#include "MorArchitectureOverride.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorZoneRowHandle> ApplicableZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSoftSpawnableAssetPtr> Options;
    
    FMorArchitectureOverride();
};

