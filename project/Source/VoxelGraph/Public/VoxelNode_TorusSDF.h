#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_TorusSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_TorusSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_TorusSDF();

};

