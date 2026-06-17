#pragma once
#include "CoreMinimal.h"
#include "VoxelNode.h"
#include "VoxelLocalVariableBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelLocalVariableBase : public UVoxelNode {
    GENERATED_BODY()
public:
    UVoxelLocalVariableBase();

};

