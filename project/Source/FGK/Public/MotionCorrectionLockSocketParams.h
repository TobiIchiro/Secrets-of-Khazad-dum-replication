#pragma once
#include "CoreMinimal.h"
#include "MotionCorrectionLockSocketParams.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FMotionCorrectionLockSocketParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LockSocketName;
    
    FMotionCorrectionLockSocketParams();
};

