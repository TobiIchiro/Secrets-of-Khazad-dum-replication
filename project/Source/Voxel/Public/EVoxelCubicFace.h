#pragma once
#include "CoreMinimal.h"
#include "EVoxelCubicFace.generated.h"

UENUM(BlueprintType)
enum class EVoxelCubicFace : uint8 {
    Back,
    Front,
    Left,
    Right,
    Bottom,
    Top,
};

