#pragma once
#include "CoreMinimal.h"
#include "VoxelSDFNode.h"
#include "VoxelNode_PlaneSDF.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_PlaneSDF : public UVoxelSDFNode {
    GENERATED_BODY()
public:
    UVoxelNode_PlaneSDF();

};

