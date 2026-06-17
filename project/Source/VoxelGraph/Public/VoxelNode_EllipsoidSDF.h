#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_EllipsoidSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_EllipsoidSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_EllipsoidSDF();

};

