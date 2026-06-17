#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_CylinderSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CylinderSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_CylinderSDF();

};

