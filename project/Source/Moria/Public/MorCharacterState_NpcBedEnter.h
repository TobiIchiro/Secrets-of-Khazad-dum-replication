#pragma once
#include "CoreMinimal.h"
#include "MorCharacterState_BedMontageBase.h"
#include "MorCharacterState_NpcBedEnter.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_NpcBedEnter : public UMorCharacterState_BedMontageBase {
    GENERATED_BODY()
public:
    UMorCharacterState_NpcBedEnter();

};

