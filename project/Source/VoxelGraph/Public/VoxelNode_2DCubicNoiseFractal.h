#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_2DCubicNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DCubicNoiseFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_2DCubicNoiseFractal();

};

