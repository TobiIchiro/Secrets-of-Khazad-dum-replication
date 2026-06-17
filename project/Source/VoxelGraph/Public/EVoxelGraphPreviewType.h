#pragma once
#include "CoreMinimal.h"
#include "EVoxelGraphPreviewType.generated.h"

UENUM(BlueprintType)
enum class EVoxelGraphPreviewType : uint8 {
    Density,
    Material,
    Cost,
    RangeAnalysis,
};

