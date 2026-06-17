#pragma once
#include "CoreMinimal.h"
#include "EVoxelPaintMaterialType.generated.h"

UENUM(BlueprintType)
enum class EVoxelPaintMaterialType : uint8 {
    Color,
    FiveWayBlend,
    SingleIndex,
    MultiIndex,
    MultiIndexWetness,
    MultiIndexRaw,
    UV,
};

