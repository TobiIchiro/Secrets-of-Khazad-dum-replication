#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_RangedCombat.h"
#include "MorBehaviorState_Destruction_Ranged.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Destruction_Ranged : public UMorBehaviorState_RangedCombat {
    GENERATED_BODY()
public:
    UMorBehaviorState_Destruction_Ranged();

};

