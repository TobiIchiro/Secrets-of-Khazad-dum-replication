#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithDependencies.h"
#include "VoxelCoordinateNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelCoordinateNode : public UVoxelNodeWithDependencies {
    GENERATED_BODY()
public:
    UVoxelCoordinateNode();

};

