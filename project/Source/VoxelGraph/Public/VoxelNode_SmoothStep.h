#pragma once
#include "CoreMinimal.h"
#include "VoxelPureNode.h"
#include "VoxelNode_SmoothStep.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SmoothStep : public UVoxelPureNode {
    GENERATED_BODY()
public:
    UVoxelNode_SmoothStep();

};

