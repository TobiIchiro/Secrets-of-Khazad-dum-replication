#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithDependencies.h"
#include "VoxelNodeWithContext.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNodeWithContext : public UVoxelNodeWithDependencies {
    GENERATED_BODY()
public:
    UVoxelNodeWithContext();

};

