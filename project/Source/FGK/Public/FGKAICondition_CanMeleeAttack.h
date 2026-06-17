#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_CanMeleeAttack.generated.h"

class AFGKCombatManager;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_CanMeleeAttack : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKCombatManager* CombatManager;
    
public:
    UFGKAICondition_CanMeleeAttack();

};

