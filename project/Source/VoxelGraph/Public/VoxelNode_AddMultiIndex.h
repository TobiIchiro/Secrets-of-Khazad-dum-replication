#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_MaterialSetter.h"
#include "VoxelNode_AddMultiIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_AddMultiIndex : public UVoxelNode_MaterialSetter {
    GENERATED_BODY()
public:
    UVoxelNode_AddMultiIndex();

};

