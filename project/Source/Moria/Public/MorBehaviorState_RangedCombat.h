#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_RangedCombat.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_RangedCombat : public UFGKBehaviorState {
    GENERATED_BODY()
public:
    UMorBehaviorState_RangedCombat();

};

