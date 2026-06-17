#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_SingleGeneratorSamplerBase.h"
#include "VoxelNode_GetGeneratorMaterial.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_GetGeneratorMaterial : public UVoxelNode_SingleGeneratorSamplerBase {
    GENERATED_BODY()
public:
    UVoxelNode_GetGeneratorMaterial();

};

