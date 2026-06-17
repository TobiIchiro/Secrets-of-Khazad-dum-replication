#pragma once
#include "CoreMinimal.h"
#include "EMorDifficultyCombatGridProperty.generated.h"

UENUM(BlueprintType)
enum class EMorDifficultyCombatGridProperty : uint8 {
    GridCapacity,
    SlotReleaseCooldown,
    SlotAssignmentCooldown,
};

