#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_RoundBoxSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_RoundBoxSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_RoundBoxSDF();

};

