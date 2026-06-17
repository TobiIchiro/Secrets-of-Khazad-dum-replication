#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_GradientPerturb.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GradientPerturb : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UVoxelNode_GradientPerturb();

};

