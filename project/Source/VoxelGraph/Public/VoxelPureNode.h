#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelPureNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelPureNode : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UVoxelPureNode();

};

