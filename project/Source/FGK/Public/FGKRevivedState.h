#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKRevivedState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKRevivedState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKRevivedState();

};

