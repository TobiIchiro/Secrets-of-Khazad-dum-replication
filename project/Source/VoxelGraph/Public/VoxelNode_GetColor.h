#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialNode.h"
#include "VoxelNode_GetColor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetColor : public UVoxelMaterialNode {
    GENERATED_BODY()
public:
    UVoxelNode_GetColor();

};

