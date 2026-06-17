#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_OctahedronSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_OctahedronSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_OctahedronSDF();

};

