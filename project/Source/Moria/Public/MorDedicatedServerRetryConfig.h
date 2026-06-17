#pragma once
#include "CoreMinimal.h"
#include "MorDedicatedServerRetryConfig.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDedicatedServerRetryConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayMultiplier;
    
    FMorDedicatedServerRetryConfig();
};

