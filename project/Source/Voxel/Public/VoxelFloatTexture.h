#pragma once
#include "CoreMinimal.h"
#include "VoxelTextureStructBase.h"
#include "VoxelFloatTexture.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelFloatTexture : public FVoxelTextureStructBase {
    GENERATED_BODY()
public:
    FVoxelFloatTexture();
};

