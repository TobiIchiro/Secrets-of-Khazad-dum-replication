#pragma once
#include "CoreMinimal.h"
#include "ETickScalabilityLevel.generated.h"

UENUM()
enum class ETickScalabilityLevel : int32 {
    NonInteractable,
    InteractableLow,
    InteractableMedium,
    InteractableHigh,
};

