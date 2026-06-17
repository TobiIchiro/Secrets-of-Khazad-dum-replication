#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivativeFractal.h"
#include "VoxelNode_2DPerlinNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DPerlinNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_2DPerlinNoiseFractal();

};

