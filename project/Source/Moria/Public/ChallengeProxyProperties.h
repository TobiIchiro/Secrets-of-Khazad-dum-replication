#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EChallengeFootprint.h"
#include "ChallengeProxyProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FChallengeProxyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeFootprint Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSmaller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisallowedChallengeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredChallengeTypes;
    
    FChallengeProxyProperties();
};

