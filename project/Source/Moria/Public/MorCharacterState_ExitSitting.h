#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_EnterSitting.h"
#include "MorCharacterState_ExitSitting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_ExitSitting : public UMorCharacterState_EnterSitting {
    GENERATED_BODY()
public:
    UMorCharacterState_ExitSitting();

};

