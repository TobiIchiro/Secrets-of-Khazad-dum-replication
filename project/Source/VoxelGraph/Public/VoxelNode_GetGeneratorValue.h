#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_SingleGeneratorSamplerBase.h"
#include "VoxelNode_GetGeneratorValue.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetGeneratorValue : public UVoxelNode_SingleGeneratorSamplerBase {
    GENERATED_BODY()
public:
    UVoxelNode_GetGeneratorValue();

};

