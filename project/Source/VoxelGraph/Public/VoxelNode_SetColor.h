#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_MaterialSetter.h"
#include "VoxelNode_SetColor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SetColor : public UVoxelNode_MaterialSetter {
    GENERATED_BODY()
public:
    UVoxelNode_SetColor();

};

