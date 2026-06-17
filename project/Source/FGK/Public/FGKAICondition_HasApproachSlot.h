#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_HasApproachSlot.generated.h"

class AFGKCombatManager;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasApproachSlot : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
public:
    UFGKAICondition_HasApproachSlot();

};

