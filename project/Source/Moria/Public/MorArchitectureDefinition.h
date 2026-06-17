#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "GameplayTagContainer.h"
#include "MorArchitectureOverride.h"
#include "MorSoftSpawnableAssetPtr.h"
#include "MorArchitectureDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorArchitectureDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShuffled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuaranteedDraws;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSoftSpawnableAssetPtr> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorArchitectureOverride> OverridesPerZone;
    
    FMorArchitectureDefinition();
};

