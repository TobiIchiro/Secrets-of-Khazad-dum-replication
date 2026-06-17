#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialIndices.generated.h"

USTRUCT(BlueprintType)
struct FVoxelMaterialIndices {
    GENERATED_BODY()
public:
    VOXEL_API FVoxelMaterialIndices();
};
FORCEINLINE uint32 GetTypeHash(const FVoxelMaterialIndices) { return 0; }

