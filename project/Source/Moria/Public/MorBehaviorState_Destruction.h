#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorBehaviorState_Destruction.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorBehaviorState_Destruction : public UFGKBehaviorState {
    GENERATED_BODY()
public:
    UMorBehaviorState_Destruction();

};

