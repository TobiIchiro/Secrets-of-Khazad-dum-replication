#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "WormCharacterState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UWormCharacterState : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UWormCharacterState();

};

