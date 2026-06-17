#pragma once
#include "CoreMinimal.h"
#include "EVoxelThreadPriority.generated.h"

UENUM(BlueprintType)
enum class EVoxelThreadPriority : uint8 {
    Normal,
    AboveNormal,
    BelowNormal,
    Highest,
    Lowest,
    SlightlyBelowNormal,
    TimeCritical,
};

