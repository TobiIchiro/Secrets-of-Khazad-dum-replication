#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivativeFractal.h"
#include "VoxelNode_2DValueNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_2DValueNoiseFractal();

};

