#pragma once
#include "CoreMinimal.h"
#include "FGKLocomotionState.h"
#include "FGKWalkingState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKWalkingState : public UFGKLocomotionState {
    GENERATED_BODY()
public:
    UFGKWalkingState();

};

