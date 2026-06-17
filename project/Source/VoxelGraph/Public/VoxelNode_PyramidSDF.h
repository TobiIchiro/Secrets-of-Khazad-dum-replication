#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_PyramidSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_PyramidSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_PyramidSDF();

};

