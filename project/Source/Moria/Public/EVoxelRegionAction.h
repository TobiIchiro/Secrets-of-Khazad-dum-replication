#pragma once
#include "CoreMinimal.h"
#include "EVoxelRegionAction.generated.h"

UENUM(BlueprintType)
enum class EVoxelRegionAction : uint8 {
    Generate,
    Exclude,
    OreVein,
};

