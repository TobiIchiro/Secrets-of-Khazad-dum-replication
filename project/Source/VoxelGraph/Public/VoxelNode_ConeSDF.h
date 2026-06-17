#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_ConeSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_ConeSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_ConeSDF();

};

