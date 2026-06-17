#pragma once
#include "CoreMinimal.h"
#include "FGKLocomotionState.h"
#include "FGKJoggingState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKJoggingState : public UFGKLocomotionState {
    GENERATED_BODY()
public:
    UFGKJoggingState();

};

