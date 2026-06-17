#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKUnequipState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKUnequipState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKUnequipState();

};

