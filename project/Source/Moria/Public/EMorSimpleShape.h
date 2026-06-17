#pragma once
#include "CoreMinimal.h"
#include "EMorSimpleShape.generated.h"

UENUM(BlueprintType)
enum class EMorSimpleShape : uint8 {
    Empty,
    Sphere,
    Capsule,
    OrientedBox,
};

