#pragma once
#include "CoreMinimal.h"
#include "EVoxelDataPinCategory.generated.h"

UENUM(BlueprintType)
enum class EVoxelDataPinCategory : uint8 {
    Boolean,
    Int,
    Float,
    Material,
    Color,
};

