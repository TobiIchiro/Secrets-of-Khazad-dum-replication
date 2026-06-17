#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_HasTargetByTeam.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasTargetByTeam : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
public:
    UFGKAICondition_HasTargetByTeam();

};

