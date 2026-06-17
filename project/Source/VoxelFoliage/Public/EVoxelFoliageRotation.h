#pragma once
#include "CoreMinimal.h"
#include "EVoxelFoliageRotation.generated.h"

UENUM(BlueprintType)
enum class EVoxelFoliageRotation : uint8 {
    AlignToSurface,
    AlignToWorldUp,
    RandomAlign,
};

