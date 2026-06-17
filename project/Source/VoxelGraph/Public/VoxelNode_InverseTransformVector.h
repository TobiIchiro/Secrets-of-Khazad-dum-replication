#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithContext.h"
#include "VoxelNode_InverseTransformVector.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_InverseTransformVector : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UVoxelNode_InverseTransformVector();

};

