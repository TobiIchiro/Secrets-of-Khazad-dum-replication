#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_SmoothSubtraction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SmoothSubtraction : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_SmoothSubtraction();

};

