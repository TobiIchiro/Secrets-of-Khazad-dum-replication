#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_MaterialSetter.h"
#include "VoxelNode_SetSingleIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SetSingleIndex : public UVoxelNode_MaterialSetter {
    GENERATED_BODY()
public:
    UVoxelNode_SetSingleIndex();

};

