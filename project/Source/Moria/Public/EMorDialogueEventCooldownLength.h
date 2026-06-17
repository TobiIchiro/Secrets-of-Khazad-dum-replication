#pragma once
#include "CoreMinimal.h"
#include "EMorDialogueEventCooldownLength.generated.h"

UENUM(BlueprintType)
enum class EMorDialogueEventCooldownLength : uint8 {
    None,
    AlmostInstant,
    VeryShort,
    Short,
    Medium,
    Long,
    VeryLong,
    Longest,
};

