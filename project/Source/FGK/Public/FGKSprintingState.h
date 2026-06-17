#pragma once
#include "CoreMinimal.h"
#include "FGKLocomotionState.h"
#include "FGKSprintingState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKSprintingState : public UFGKLocomotionState {
    GENERATED_BODY()
public:
    UFGKSprintingState();

};

