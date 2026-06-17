#pragma once
#include "CoreMinimal.h"
#include "VoxelSetterNode.h"
#include "VoxelNode_MaterialSetter.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_MaterialSetter : public UVoxelSetterNode {
    GENERATED_BODY()
public:
    UVoxelNode_MaterialSetter();

};

