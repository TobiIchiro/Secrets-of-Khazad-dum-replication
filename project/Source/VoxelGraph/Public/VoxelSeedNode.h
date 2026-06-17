#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelSeedNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelSeedNode : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UVoxelSeedNode();

};

