#pragma once
#include "CoreMinimal.h"
#include "VoxelGraphMacroInputOutputNode.h"
#include "VoxelGraphMacroOutputNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelGraphMacroOutputNode : public UVoxelGraphMacroInputOutputNode {
    GENERATED_BODY()
public:
    UVoxelGraphMacroOutputNode();

};

