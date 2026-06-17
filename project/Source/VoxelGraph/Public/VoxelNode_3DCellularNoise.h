#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_CellularNoise.h"
#include "VoxelNode_3DCellularNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DCellularNoise : public UVoxelNode_CellularNoise {
    GENERATED_BODY()
public:
    UVoxelNode_3DCellularNoise();

};

