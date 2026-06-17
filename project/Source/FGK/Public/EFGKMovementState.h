#pragma once
#include "CoreMinimal.h"
#include "EFGKMovementState.generated.h"

UENUM(BlueprintType)
enum class EFGKMovementState : uint8 {
    None,
    Grounded,
    InAir,
    Mantling,
    Ragdoll,
    Custom,
};

