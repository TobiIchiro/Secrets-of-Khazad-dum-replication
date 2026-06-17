#pragma once
#include "CoreMinimal.h"
#include "VoxelPureNode.h"
#include "VoxelSDFNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelSDFNode : public UVoxelPureNode {
    GENERATED_BODY()
public:
    UVoxelSDFNode();

};

