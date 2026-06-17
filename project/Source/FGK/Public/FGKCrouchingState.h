#pragma once
#include "CoreMinimal.h"
#include "FGKLocomotionState.h"
#include "FGKCrouchingState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKCrouchingState : public UFGKLocomotionState {
    GENERATED_BODY()
public:
    UFGKCrouchingState();

};

