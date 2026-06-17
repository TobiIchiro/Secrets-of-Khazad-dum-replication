#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_SetNode.h"
#include "VoxelNode_SetValueNode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SetValueNode : public UVoxelNode_SetNode {
    GENERATED_BODY()
public:
    UVoxelNode_SetValueNode();

};

