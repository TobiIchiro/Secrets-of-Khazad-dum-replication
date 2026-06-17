#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKSlowMoveState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKSlowMoveState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKSlowMoveState();

};

