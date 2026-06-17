#pragma once
#include "CoreMinimal.h"
#include "MotionCorrectionUpdateData.h"
#include "MotionCorrectionConfigData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGK_API FMotionCorrectionConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionCorrectionUpdateData UpdateData;
    
    FMotionCorrectionConfigData();
};

