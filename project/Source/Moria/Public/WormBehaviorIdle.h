#pragma once
#include "CoreMinimal.h"
#include "WormBehaviorState.h"
#include "WormBehaviorIdle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UWormBehaviorIdle : public UWormBehaviorState {
    GENERATED_BODY()
public:
    UWormBehaviorIdle();

};

