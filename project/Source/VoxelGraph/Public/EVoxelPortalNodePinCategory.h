#pragma once
#include "CoreMinimal.h"
#include "EVoxelPortalNodePinCategory.generated.h"

UENUM(BlueprintType)
enum class EVoxelPortalNodePinCategory : uint8 {
    Boolean,
    Int,
    Float,
    Material,
    Color,
    Seed,
};

