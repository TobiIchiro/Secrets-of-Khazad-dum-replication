#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithContext.h"
#include "VoxelNode_LocalToGlobal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_LocalToGlobal : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UVoxelNode_LocalToGlobal();

};

