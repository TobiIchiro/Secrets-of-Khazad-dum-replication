#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_3DCubicNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_3DCubicNoiseFractal();

};

