#pragma once
#include "CoreMinimal.h"
#include "EVoxelFoliageCustomDataType.generated.h"

UENUM(BlueprintType)
enum class EVoxelFoliageCustomDataType : uint8 {
    ColorGeneratorOutput,
    FloatGeneratorOutput,
    MaterialColor,
    MaterialSingleIndex,
    MaterialUV,
};

