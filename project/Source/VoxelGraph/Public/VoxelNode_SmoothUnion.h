#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_SmoothUnion.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SmoothUnion : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_SmoothUnion();

};

