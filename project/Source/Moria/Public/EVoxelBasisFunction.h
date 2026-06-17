#pragma once
#include "CoreMinimal.h"
#include "EVoxelBasisFunction.generated.h"

UENUM(BlueprintType)
enum class EVoxelBasisFunction : uint8 {
    Perlin,
    VoronoiIndex,
    VoronoiF1,
    VoronoiF2,
    VoronoiF2MinusF1,
    VoronoiF3,
};

