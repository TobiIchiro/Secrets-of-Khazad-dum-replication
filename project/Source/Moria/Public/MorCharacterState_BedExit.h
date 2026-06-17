#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_BedMontageBase.h"
#include "MorCharacterState_BedExit.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_BedExit : public UMorCharacterState_BedMontageBase {
    GENERATED_BODY()
public:
    UMorCharacterState_BedExit();

};

