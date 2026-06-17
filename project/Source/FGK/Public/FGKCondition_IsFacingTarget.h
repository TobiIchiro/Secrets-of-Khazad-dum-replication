#pragma once
#include "CoreMinimal.h"
#include "FGKCondition_TargetBase.h"
#include "FGKCondition_IsFacingTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_IsFacingTarget : public UFGKCondition_TargetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
public:
    UFGKCondition_IsFacingTarget();

};

