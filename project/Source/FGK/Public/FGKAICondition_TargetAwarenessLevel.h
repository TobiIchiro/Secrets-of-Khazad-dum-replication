#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "EFGKAIAwarenessLevel.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_TargetAwarenessLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_TargetAwarenessLevel : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIAwarenessLevel AwarenessLevelToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETeamAttitude::Type> TeamAttitude;
    
public:
    UFGKAICondition_TargetAwarenessLevel();

};

