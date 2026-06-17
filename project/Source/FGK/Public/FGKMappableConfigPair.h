#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "GameplayTagContainer.h"
#include "FGKMappableConfigPair.generated.h"

class UPlayerMappableInputConfig;

USTRUCT(BlueprintType)
struct FGK_API FFGKMappableConfigPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPlayerMappableInputConfig> Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DependentPlatformTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedPlatformTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldActivateAutomatically;
    
    FFGKMappableConfigPair();
};

