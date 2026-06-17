#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "FGKAICondition_IsActorPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKAICondition_IsActorPlayer : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
    UFGKAICondition_IsActorPlayer();

};

