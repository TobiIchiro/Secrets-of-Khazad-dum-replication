#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "MorCharacterState_Dead.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_Dead : public UFGKCharacterState {
    GENERATED_BODY()
public:
    UMorCharacterState_Dead();

};

