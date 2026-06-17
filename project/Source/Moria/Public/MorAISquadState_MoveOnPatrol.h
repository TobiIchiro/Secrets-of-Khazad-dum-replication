#pragma once
#include "CoreMinimal.h"
#include "FGKAISquadState_MoveTo.h"
#include "MorAISquadState_MoveOnPatrol.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAISquadState_MoveOnPatrol : public UFGKAISquadState_MoveTo {
    GENERATED_BODY()
public:
    UMorAISquadState_MoveOnPatrol();

};

