#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Position.h"
#include "MotionCorrectionTarget.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FMotionCorrectionTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPosition Position;
    
    FMotionCorrectionTarget();
};

