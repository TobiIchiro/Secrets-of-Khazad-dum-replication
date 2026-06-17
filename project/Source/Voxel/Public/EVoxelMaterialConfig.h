#pragma once
#include "CoreMinimal.h"
#include "EVoxelMaterialConfig.generated.h"

UENUM(BlueprintType)
enum class EVoxelMaterialConfig : uint8 {
    RGB,
    SingleIndex,
    DoubleIndex_DEPRECATED,
    MultiIndex,
};

