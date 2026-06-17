#pragma once
#include "CoreMinimal.h"
#include "EVoxelWorldCoordinatesRounding.generated.h"

UENUM(BlueprintType)
enum class EVoxelWorldCoordinatesRounding : uint8 {
    RoundToNearest,
    RoundUp,
    RoundDown,
};

