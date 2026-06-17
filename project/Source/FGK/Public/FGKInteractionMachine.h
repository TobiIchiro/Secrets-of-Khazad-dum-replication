#pragma once
#include "CoreMinimal.h"
#include "FGKState.h"
#include "FGKInteractionMachine.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKInteractionMachine : public UFGKState {
    GENERATED_BODY()
public:
    UFGKInteractionMachine();

};

