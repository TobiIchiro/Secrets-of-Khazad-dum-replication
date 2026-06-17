#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_GradientPerturbFractal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GradientPerturbFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_GradientPerturbFractal();

};

