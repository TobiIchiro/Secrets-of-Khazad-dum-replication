#pragma once
#include "CoreMinimal.h"
#include "EVoxelFunctionAxisDependencies.generated.h"

UENUM(BlueprintType)
enum class EVoxelFunctionAxisDependencies : uint8 {
    X,
    XYWithCache,
    XYWithoutCache,
    XYZWithCache,
    XYZWithoutCache,
};

