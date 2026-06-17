#pragma once
#include "CoreMinimal.h"
#include "EVoxelNoiseFractalType.generated.h"

UENUM(BlueprintType)
enum class EVoxelNoiseFractalType : uint8 {
    FBM,
    Billow,
    RigidMulti,
};

