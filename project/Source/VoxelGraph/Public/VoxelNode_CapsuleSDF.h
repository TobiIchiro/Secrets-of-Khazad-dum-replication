#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_CapsuleSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CapsuleSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_CapsuleSDF();

};

