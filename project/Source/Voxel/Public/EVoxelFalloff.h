#pragma once
#include "CoreMinimal.h"
#include "EVoxelFalloff.generated.h"

UENUM(BlueprintType)
enum class EVoxelFalloff : uint8 {
    Linear,
    Smooth,
    Spherical,
    Tip,
};

