#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_VoronoiNoiseBase.h"
#include "VoxelNode_2DVoronoiNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DVoronoiNoise : public UVoxelNode_VoronoiNoiseBase {
    GENERATED_BODY()
public:
    UVoxelNode_2DVoronoiNoise();

};

