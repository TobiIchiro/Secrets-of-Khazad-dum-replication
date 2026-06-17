#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_3DCubicNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DCubicNoise : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UVoxelNode_3DCubicNoise();

};

