#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_MoveTo.h"
#include "FGKBehaviorState_MeleeAttack_GoToPosition.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_MeleeAttack_GoToPosition : public UFGKBehaviorState_MoveTo {
    GENERATED_BODY()
public:
    UFGKBehaviorState_MeleeAttack_GoToPosition();

};

