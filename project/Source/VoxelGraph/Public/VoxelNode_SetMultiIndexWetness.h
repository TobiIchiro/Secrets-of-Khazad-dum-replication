#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_MaterialSetter.h"
#include "VoxelNode_SetMultiIndexWetness.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SetMultiIndexWetness : public UVoxelNode_MaterialSetter {
    GENERATED_BODY()
public:
    UVoxelNode_SetMultiIndexWetness();

};

