#pragma once
#include "CoreMinimal.h"
#include "FGKInputState.h"
#include "FGKDisabledInputState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKDisabledInputState : public UFGKInputState {
    GENERATED_BODY()
public:
    UFGKDisabledInputState();

};

