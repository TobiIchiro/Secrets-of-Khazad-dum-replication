#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_TriPrismSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_TriPrismSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_TriPrismSDF();

};

