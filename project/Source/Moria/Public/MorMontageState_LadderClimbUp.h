#pragma once
#include "CoreMinimal.h"
#include "MorMontageState_ClimbingRope.h"
#include "MorMontageState_LadderClimbUp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMontageState_LadderClimbUp : public UMorMontageState_ClimbingRope {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTimeFirstThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimTimeSecondThreshold;
    
public:
    UMorMontageState_LadderClimbUp();

};

