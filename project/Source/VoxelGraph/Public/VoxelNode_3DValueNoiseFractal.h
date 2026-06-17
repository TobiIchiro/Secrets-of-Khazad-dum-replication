#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivativeFractal.h"
#include "VoxelNode_3DValueNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DValueNoiseFractal : public UVoxelNode_NoiseNodeWithDerivativeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_3DValueNoiseFractal();

};

