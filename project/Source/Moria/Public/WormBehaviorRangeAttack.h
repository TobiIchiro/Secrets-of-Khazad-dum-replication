#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_AttackRanged.h"
#include "WormBehaviorRangeAttack.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormBehaviorRangeAttack : public UMorBehaviorState_AttackRanged {
    GENERATED_BODY()
public:
    UWormBehaviorRangeAttack();

};

