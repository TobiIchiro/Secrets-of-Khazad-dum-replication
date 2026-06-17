#pragma once
#include "CoreMinimal.h"
#include "EFGKCombatSlotRotationType.generated.h"

UENUM(BlueprintType)
enum class EFGKCombatSlotRotationType : uint8 {
    NoRotation,
    WithCharacterForward,
    WithCameraForward,
};

