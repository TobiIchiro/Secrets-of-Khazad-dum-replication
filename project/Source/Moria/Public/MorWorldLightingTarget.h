#pragma once
#include "CoreMinimal.h"
#include "MorWorldLightingTarget.generated.h"

class AMorLocalLightingInfo;

USTRUCT(BlueprintType)
struct MORIA_API FMorWorldLightingTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorLocalLightingInfo* TargetLightingInfo;
    
    FMorWorldLightingTarget();
};

