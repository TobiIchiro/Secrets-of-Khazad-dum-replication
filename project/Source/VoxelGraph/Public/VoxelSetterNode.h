#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelSetterNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelSetterNode : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UVoxelSetterNode();

};

