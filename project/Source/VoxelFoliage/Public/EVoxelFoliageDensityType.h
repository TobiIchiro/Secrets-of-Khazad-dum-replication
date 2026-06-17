#pragma once
#include "CoreMinimal.h"
#include "EVoxelFoliageDensityType.generated.h"

UENUM(BlueprintType)
enum class EVoxelFoliageDensityType : uint8 {
    Constant,
    GeneratorOutput,
    MaterialRGBA,
    MaterialUVs,
    MaterialFiveWayBlend,
    SingleIndex,
    MultiIndex,
};

