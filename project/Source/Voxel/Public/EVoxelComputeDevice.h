#pragma once
#include "CoreMinimal.h"
#include "EVoxelComputeDevice.generated.h"

UENUM(BlueprintType)
enum class EVoxelComputeDevice : uint8 {
    CPU,
    GPU,
};

