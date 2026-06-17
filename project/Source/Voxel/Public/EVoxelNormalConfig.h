#pragma once
#include "CoreMinimal.h"
#include "EVoxelNormalConfig.generated.h"

UENUM(BlueprintType)
enum class EVoxelNormalConfig : uint8 {
    NoNormal,
    GradientNormal,
    FlatNormal,
    MeshNormal,
};

