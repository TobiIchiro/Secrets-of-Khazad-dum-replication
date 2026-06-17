#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_BoxSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_BoxSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_BoxSDF();

};

