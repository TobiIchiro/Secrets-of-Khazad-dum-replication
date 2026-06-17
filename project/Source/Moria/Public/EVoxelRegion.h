#pragma once
#include "CoreMinimal.h"
#include "EVoxelRegion.generated.h"

UENUM(BlueprintType)
enum class EVoxelRegion : uint8 {
    Capsule,
    Box,
    Mesh,
};

