#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState.h"
#include "WormSquadState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWormSquadState : public UFGKAISquadState {
    GENERATED_BODY()
public:
    UWormSquadState();

};

