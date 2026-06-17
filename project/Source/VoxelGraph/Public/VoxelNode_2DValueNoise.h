#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivative.h"
#include "VoxelNode_2DValueNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DValueNoise : public UVoxelNode_NoiseNodeWithDerivative {
    GENERATED_BODY()
public:
    UVoxelNode_2DValueNoise();

};

