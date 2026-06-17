#pragma once
#include "CoreMinimal.h"
#include "VoxelGenerator.h"
#include "VoxelChunkGenerator.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelChunkGenerator : public UVoxelGenerator {
    GENERATED_BODY()
public:
    UVoxelChunkGenerator();

};

