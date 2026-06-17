#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "WormBehaviorState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWormBehaviorState : public UFGKBehaviorState {
    GENERATED_BODY()
public:
    UWormBehaviorState();

};

