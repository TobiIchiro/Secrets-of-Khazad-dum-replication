#pragma once
#include "CoreMinimal.h"
#include "EVoxelSDFMergeMode.generated.h"

UENUM(BlueprintType)
enum class EVoxelSDFMergeMode : uint8 {
    Union,
    Intersection,
    Override,
};

