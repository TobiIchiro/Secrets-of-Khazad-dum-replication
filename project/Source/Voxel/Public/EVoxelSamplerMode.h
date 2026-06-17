#pragma once
#include "CoreMinimal.h"
#include "EVoxelSamplerMode.generated.h"

UENUM(BlueprintType)
enum class EVoxelSamplerMode : uint8 {
    Clamp,
    Tile,
};

