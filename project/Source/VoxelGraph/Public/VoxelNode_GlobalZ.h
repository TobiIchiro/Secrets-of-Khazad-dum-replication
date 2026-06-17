#pragma once
#include "CoreMinimal.h"
#include "VoxelCoordinateNode.h"
#include "VoxelNode_GlobalZ.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GlobalZ : public UVoxelCoordinateNode {
    GENERATED_BODY()
public:
    UVoxelNode_GlobalZ();

};

