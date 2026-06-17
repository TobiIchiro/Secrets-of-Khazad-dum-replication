#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_IsActorPlayerFriendly.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_IsActorPlayerFriendly : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
    UFGKAICondition_IsActorPlayerFriendly();

};

