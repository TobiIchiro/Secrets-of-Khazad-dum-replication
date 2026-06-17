#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_CraterNoiseFractal.h"
#include "VoxelNode_3DCraterNoiseFractal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DCraterNoiseFractal : public UVoxelNode_CraterNoiseFractal {
    GENERATED_BODY()
public:
    UVoxelNode_3DCraterNoiseFractal();

};

