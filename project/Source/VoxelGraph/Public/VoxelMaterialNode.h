#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelMaterialNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelMaterialNode : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UVoxelMaterialNode();

};

