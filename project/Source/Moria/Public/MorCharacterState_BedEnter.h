#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_BedMontageBase.h"
#include "MorCharacterState_BedEnter.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_BedEnter : public UMorCharacterState_BedMontageBase {
    GENERATED_BODY()
public:
    UMorCharacterState_BedEnter();

};

