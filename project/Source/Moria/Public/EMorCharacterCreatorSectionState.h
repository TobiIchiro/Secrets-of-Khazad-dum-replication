#pragma once
#include "CoreMinimal.h"
#include "EMorCharacterCreatorSectionState.generated.h"

UENUM(BlueprintType)
enum class EMorCharacterCreatorSectionState : uint8 {
    SectionState_Normal,
    SectionState_Hovered,
    SectionState_Selected,
};

