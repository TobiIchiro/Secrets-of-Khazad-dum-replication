#pragma once
#include "CoreMinimal.h"
#include "EFGKRotationMode.generated.h"

UENUM(BlueprintType)
enum class EFGKRotationMode : uint8 {
    VelocityDirection,
    LookingDirection,
    Aiming,
    PathingDirection,
    None,
};

