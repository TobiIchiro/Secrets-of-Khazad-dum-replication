#pragma once
#include "CoreMinimal.h"
#include "VoxelGenerator.h"
#include "VoxelTransformableGenerator.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelTransformableGenerator : public UVoxelGenerator {
    GENERATED_BODY()
public:
    UVoxelTransformableGenerator();

};

