#pragma once
#include "CoreMinimal.h"
#include "EVoxelFoliageRandomGenerator.generated.h"

UENUM(BlueprintType)
enum class EVoxelFoliageRandomGenerator : uint8 {
    Sobol,
    Halton,
};

