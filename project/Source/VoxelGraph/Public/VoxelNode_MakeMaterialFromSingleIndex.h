#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialNode.h"
#include "VoxelNode_MakeMaterialFromSingleIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_MakeMaterialFromSingleIndex : public UVoxelMaterialNode {
    GENERATED_BODY()
public:
    UVoxelNode_MakeMaterialFromSingleIndex();

};

