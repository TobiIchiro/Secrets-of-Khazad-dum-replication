#pragma once
#include "CoreMinimal.h"
#include "EFGKCollisionShape.generated.h"

UENUM(BlueprintType)
enum class EFGKCollisionShape : uint8 {
    VerticalCapsule,
    HorizontalCapsule,
    Box,
    Sphere,
    Invalid,
    MAX,
};

