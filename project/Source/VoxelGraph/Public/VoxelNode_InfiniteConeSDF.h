#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_InfiniteConeSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_InfiniteConeSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_InfiniteConeSDF();

};

