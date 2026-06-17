#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "FGKBodyMachine.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKBodyMachine : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UFGKBodyMachine();

};

