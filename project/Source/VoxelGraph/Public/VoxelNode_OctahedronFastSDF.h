#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_OctahedronFastSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_OctahedronFastSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_OctahedronFastSDF();

};

