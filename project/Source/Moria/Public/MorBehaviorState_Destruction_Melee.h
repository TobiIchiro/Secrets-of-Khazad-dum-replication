#pragma once
#include "CoreMinimal.h"
#include "MorBehaviorState_MeleeCombat.h"
#include "MorBehaviorState_Destruction_Melee.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Destruction_Melee : public UMorBehaviorState_MeleeCombat {
    GENERATED_BODY()
public:
    UMorBehaviorState_Destruction_Melee();

};

