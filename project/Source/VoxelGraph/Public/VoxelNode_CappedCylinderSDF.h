#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_CappedCylinderSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CappedCylinderSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_CappedCylinderSDF();

};

