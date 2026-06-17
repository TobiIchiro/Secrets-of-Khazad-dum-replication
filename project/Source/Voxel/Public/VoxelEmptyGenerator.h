#pragma once
#include "CoreMinimal.h"
#include "VoxelTransformableGenerator.h"
#include "VoxelEmptyGenerator.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelEmptyGenerator : public UVoxelTransformableGenerator {
    GENERATED_BODY()
public:
    UVoxelEmptyGenerator();

};

