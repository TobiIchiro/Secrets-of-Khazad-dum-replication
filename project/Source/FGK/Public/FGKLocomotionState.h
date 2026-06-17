#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKLocomotionState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKLocomotionState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKLocomotionState();

};

