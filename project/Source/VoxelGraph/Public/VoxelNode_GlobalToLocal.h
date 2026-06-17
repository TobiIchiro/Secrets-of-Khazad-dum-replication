#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithContext.h"
#include "VoxelNode_GlobalToLocal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GlobalToLocal : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UVoxelNode_GlobalToLocal();

};

