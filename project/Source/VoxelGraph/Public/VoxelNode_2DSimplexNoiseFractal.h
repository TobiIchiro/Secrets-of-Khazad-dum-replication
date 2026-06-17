#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_2DSimplexNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_2DSimplexNoiseFractal();

};

