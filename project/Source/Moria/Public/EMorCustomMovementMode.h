#pragma once
#include "CoreMinimal.h"
#include "EMorCustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class EMorCustomMovementMode : uint8 {
    NONE,
    Spline = 64,
    FreeClimb,
    JumpLink,
    Animation,
};

