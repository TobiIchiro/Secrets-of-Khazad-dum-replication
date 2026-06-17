#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState_RandomHub.h"
#include "FGKBehaviorState_TestDenySyncAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKBehaviorState_TestDenySyncAttack : public UFGKBehaviorState_RandomHub {
    GENERATED_BODY()
public:
    UFGKBehaviorState_TestDenySyncAttack();

};

