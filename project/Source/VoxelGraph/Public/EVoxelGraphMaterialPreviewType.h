#pragma once
#include "CoreMinimal.h"
#include "EVoxelGraphMaterialPreviewType.generated.h"

UENUM(BlueprintType)
enum class EVoxelGraphMaterialPreviewType : uint8 {
    RGB,
    Alpha,
    SingleIndex,
    MultiIndex_Overview,
    MultiIndex_SingleIndexPreview,
    MultiIndex_Wetness,
    UV0,
    UV1,
    UV2,
    UV3,
};

