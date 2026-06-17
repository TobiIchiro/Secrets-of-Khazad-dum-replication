#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_RoundedCylinderSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_RoundedCylinderSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_RoundedCylinderSDF();

};

