#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivative.h"
#include "VoxelNode_3DValueNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DValueNoise : public UVoxelNode_NoiseNodeWithDerivative {
    GENERATED_BODY()
public:
    UVoxelNode_3DValueNoise();

};

