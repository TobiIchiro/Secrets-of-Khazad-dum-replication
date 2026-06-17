#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_2DCubicNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DCubicNoise : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UVoxelNode_2DCubicNoise();

};

