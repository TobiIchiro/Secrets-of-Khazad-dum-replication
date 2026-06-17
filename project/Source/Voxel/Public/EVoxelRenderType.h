#pragma once
#include "CoreMinimal.h"
#include "EVoxelRenderType.generated.h"

UENUM(BlueprintType)
enum class EVoxelRenderType : uint8 {
    MarchingCubes,
    Cubic,
    SurfaceNets,
};

