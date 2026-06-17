#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_CappedConeSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CappedConeSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_CappedConeSDF();

};

