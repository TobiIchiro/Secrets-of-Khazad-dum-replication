#pragma once
#include "CoreMinimal.h"
#include "VoxelTextureStructBase.h"
#include "VoxelColorTexture.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelColorTexture : public FVoxelTextureStructBase {
    GENERATED_BODY()
public:
    FVoxelColorTexture();
};

