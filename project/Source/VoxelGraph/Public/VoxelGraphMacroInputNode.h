#pragma once
#include "CoreMinimal.h"
#include "VoxelGraphMacroInputOutputNode.h"
#include "VoxelGraphMacroInputNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelGraphMacroInputNode : public UVoxelGraphMacroInputOutputNode {
    GENERATED_BODY()
public:
    UVoxelGraphMacroInputNode();

};

