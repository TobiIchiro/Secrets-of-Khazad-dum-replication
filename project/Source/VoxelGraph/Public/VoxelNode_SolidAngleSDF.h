#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_SolidAngleSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SolidAngleSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_SolidAngleSDF();

};

