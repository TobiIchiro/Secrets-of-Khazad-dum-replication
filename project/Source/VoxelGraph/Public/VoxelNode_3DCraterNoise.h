#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_CraterNoise.h"
#include "VoxelNode_3DCraterNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DCraterNoise : public UVoxelNode_CraterNoise {
    GENERATED_BODY()
public:
    UVoxelNode_3DCraterNoise();

};

