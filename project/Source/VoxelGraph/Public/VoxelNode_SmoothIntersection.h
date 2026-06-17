#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_SmoothIntersection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SmoothIntersection : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_SmoothIntersection();

};

