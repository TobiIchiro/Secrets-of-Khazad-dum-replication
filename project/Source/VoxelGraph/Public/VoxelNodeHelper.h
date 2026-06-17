#pragma once
#include "CoreMinimal.h"
#include "VoxelNode.h"
#include "VoxelNodeHelper.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNodeHelper : public UVoxelNode {
    GENERATED_BODY()
public:
    UVoxelNodeHelper();

};

