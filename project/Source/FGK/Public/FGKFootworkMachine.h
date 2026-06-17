#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKFootworkMachine.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKFootworkMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKFootworkMachine();

};

