#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_EnterSitting.h"
#include "MorCharacterState_UpdateSitting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_UpdateSitting : public UMorCharacterState_EnterSitting {
    GENERATED_BODY()
public:
    UMorCharacterState_UpdateSitting();

};

