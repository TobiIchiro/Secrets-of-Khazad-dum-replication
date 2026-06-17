#pragma once
#include "CoreMinimal.h"
#include "VoxelTransformableGenerator.h"
#include "VoxelTransformableGeneratorWithBounds.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelTransformableGeneratorWithBounds : public UVoxelTransformableGenerator {
    GENERATED_BODY()
public:
    UVoxelTransformableGeneratorWithBounds();

};

