#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivative.h"
#include "VoxelNode_3DPerlinNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DPerlinNoise : public UVoxelNode_NoiseNodeWithDerivative {
    GENERATED_BODY()
public:
    UVoxelNode_3DPerlinNoise();

};

