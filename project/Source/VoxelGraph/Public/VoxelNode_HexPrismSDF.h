#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_HexPrismSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_HexPrismSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_HexPrismSDF();

};

