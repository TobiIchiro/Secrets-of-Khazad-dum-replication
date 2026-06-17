#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_HasIncomingDamage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_HasIncomingDamage : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
    UFGKAICondition_HasIncomingDamage();

};

