#pragma once
#include "CoreMinimal.h"
#include "EVoxelRGBHardness.generated.h"

UENUM(BlueprintType)
enum class EVoxelRGBHardness : uint8 {
    FourWayBlend,
    FiveWayBlend,
    R,
    G,
    B,
    A,
    U0,
    U1,
    V0,
    V1,
};

