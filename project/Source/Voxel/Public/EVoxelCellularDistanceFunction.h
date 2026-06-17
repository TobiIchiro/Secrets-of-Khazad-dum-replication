#pragma once
#include "CoreMinimal.h"
#include "EVoxelCellularDistanceFunction.generated.h"

UENUM(BlueprintType)
enum class EVoxelCellularDistanceFunction : uint8 {
    Euclidean,
    Manhattan,
    Natural,
};

