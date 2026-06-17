#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_CraterNoise.h"
#include "VoxelNode_2DCraterNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DCraterNoise : public UVoxelNode_CraterNoise {
    GENERATED_BODY()
public:
    UVoxelNode_2DCraterNoise();

};

