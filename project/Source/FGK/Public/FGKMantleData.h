#pragma once
#include "CoreMinimal.h"
#include "EFGKMantleType.h"
#include "FGKComponentAndTransform.h"
#include "MotionCorrectionTarget.h"
#include "FGKMantleData.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKMantleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKMantleType MantleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKComponentAndTransform MantleLedgeWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MantleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMotionCorrectionTarget> Targets;
    
    FFGKMantleData();
};

