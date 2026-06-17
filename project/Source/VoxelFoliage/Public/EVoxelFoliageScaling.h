#pragma once
#include "CoreMinimal.h"
#include "EVoxelFoliageScaling.generated.h"

UENUM(BlueprintType)
enum class EVoxelFoliageScaling : uint8 {
    Uniform,
    Free,
    LockXY,
};

