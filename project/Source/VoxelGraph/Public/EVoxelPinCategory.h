#pragma once
#include "CoreMinimal.h"
#include "EVoxelPinCategory.generated.h"

UENUM(BlueprintType)
enum class EVoxelPinCategory : uint8 {
    Exec,
    Boolean,
    Int,
    Float,
    Material,
    Color,
    Seed,
    Wildcard,
    Vector,
};

