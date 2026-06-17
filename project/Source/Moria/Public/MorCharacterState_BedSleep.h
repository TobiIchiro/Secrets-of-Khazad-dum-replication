#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_BedMontageBase.h"
#include "MorCharacterState_BedSleep.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_BedSleep : public UMorCharacterState_BedMontageBase {
    GENERATED_BODY()
public:
    UMorCharacterState_BedSleep();

};

