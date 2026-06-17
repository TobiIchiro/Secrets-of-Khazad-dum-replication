#pragma once
#include "CoreMinimal.h"
#include "EVoxelMapCombine.generated.h"

UENUM(BlueprintType)
enum class EVoxelMapCombine : uint8 {
    Add,
    Multiply,
    Distort,
};

