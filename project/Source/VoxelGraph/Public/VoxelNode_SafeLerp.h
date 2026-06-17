#pragma once
#include "CoreMinimal.h"
#include "VoxelPureNode.h"
#include "VoxelNode_SafeLerp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SafeLerp : public UVoxelPureNode {
    GENERATED_BODY()
public:
    UVoxelNode_SafeLerp();

};

