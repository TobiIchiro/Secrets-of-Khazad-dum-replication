#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "MotionCorrectionWindowParams.h"
#include "FGKAnimNotifyState_MotionCorrection.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_MotionCorrection : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMotionCorrectionWindowParams Params;
    
    UFGKAnimNotifyState_MotionCorrection();

};

