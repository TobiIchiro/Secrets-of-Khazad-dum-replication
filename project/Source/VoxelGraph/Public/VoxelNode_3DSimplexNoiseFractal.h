#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_3DSimplexNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DSimplexNoiseFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_3DSimplexNoiseFractal();

};

