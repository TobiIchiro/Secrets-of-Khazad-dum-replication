#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_If.h"
#include "VoxelNode_IfWithDefaultToTrue.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_IfWithDefaultToTrue : public UVoxelNode_If {
    GENERATED_BODY()
public:
    UVoxelNode_IfWithDefaultToTrue();

};

