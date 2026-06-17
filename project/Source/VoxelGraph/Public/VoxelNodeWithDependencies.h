#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelNodeWithDependencies.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNodeWithDependencies : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UVoxelNodeWithDependencies();

};

