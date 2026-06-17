#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivativeFractal.h"
#include "VoxelNode_IQNoiseBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_IQNoiseBase : public UVoxelNode_NoiseNodeWithDerivativeFractal {
    GENERATED_BODY()
public:
    UVoxelNode_IQNoiseBase();

};

