#pragma once
#include "CoreMinimal.h"
#include "EFGKInterpolationType.generated.h"

UENUM(BlueprintType)
enum class EFGKInterpolationType : uint8 {
    Smooth,
    Linear,
    Curve,
};

