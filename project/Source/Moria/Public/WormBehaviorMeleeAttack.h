#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_AttackMelee.h"
#include "WormBehaviorMeleeAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormBehaviorMeleeAttack : public UMorBehaviorState_AttackMelee {
    GENERATED_BODY()
public:
    UWormBehaviorMeleeAttack();

};

