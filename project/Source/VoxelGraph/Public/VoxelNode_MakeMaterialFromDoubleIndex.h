#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialNode.h"
#include "VoxelNode_MakeMaterialFromDoubleIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_MakeMaterialFromDoubleIndex : public UVoxelMaterialNode {
    GENERATED_BODY()
public:
    UVoxelNode_MakeMaterialFromDoubleIndex();

};

