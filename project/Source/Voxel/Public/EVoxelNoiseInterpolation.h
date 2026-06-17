#pragma once
#include "CoreMinimal.h"
#include "EVoxelNoiseInterpolation.generated.h"

UENUM(BlueprintType)
enum class EVoxelNoiseInterpolation : uint8 {
    Linear,
    Hermite,
    Quintic,
};

