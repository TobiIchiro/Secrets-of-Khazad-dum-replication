#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_If.h"
#include "VoxelNode_IfWithDefaultToFalse.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_IfWithDefaultToFalse : public UVoxelNode_If {
    GENERATED_BODY()
public:
    UVoxelNode_IfWithDefaultToFalse();

};

