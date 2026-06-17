#pragma once
#include "CoreMinimal.h"
#include "EVoxelAssetMergeMode.generated.h"

UENUM(BlueprintType)
enum class EVoxelAssetMergeMode : uint8 {
    AllValues,
    AllMaterials,
    AllValuesAndAllMaterials,
    InnerValues,
    InnerMaterials,
    InnerValuesAndInnerMaterials,
};

