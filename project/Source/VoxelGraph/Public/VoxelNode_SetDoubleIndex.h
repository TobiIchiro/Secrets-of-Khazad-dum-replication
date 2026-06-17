#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_MaterialSetter.h"
#include "VoxelNode_SetDoubleIndex.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable)
class VOXELGRAPH_API UVoxelNode_SetDoubleIndex : public UVoxelNode_MaterialSetter {
    GENERATED_BODY()
public:
    UVoxelNode_SetDoubleIndex();

};

