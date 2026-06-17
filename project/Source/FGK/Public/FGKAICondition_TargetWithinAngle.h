#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EDirectionType.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_TargetWithinAngle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_TargetWithinAngle : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDirectionType DirectionType;
    
public:
    UFGKAICondition_TargetWithinAngle();

};

