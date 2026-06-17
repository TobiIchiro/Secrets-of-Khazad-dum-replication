#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_CellularNoise.h"
#include "VoxelNode_2DCellularNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DCellularNoise : public UVoxelNode_CellularNoise {
    GENERATED_BODY()
public:
    UVoxelNode_2DCellularNoise();

};

