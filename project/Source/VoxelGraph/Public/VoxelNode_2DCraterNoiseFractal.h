#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_CraterNoiseFractal.h"
#include "VoxelNode_2DCraterNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal {
    GENERATED_BODY()
public:
    UVoxelNode_2DCraterNoiseFractal();

};

