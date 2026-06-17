#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_GeneratorSamplerBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GeneratorSamplerBase : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UVoxelNode_GeneratorSamplerBase();

};

