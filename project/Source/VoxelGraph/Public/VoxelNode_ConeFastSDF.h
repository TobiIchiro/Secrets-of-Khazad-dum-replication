#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_ConeFastSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_ConeFastSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_ConeFastSDF();

};

