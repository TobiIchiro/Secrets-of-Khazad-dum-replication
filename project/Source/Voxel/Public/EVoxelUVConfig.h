#pragma once
#include "CoreMinimal.h"
#include "EVoxelUVConfig.generated.h"

UENUM(BlueprintType)
enum class EVoxelUVConfig : uint8 {
    GlobalUVs,
    PackWorldUpInUVs,
    PerVoxelUVs,
    Max,
};

