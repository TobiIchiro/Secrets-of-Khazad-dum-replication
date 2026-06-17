#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_2DGavoronoiNoise.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DGavoronoiNoise : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jitter;
    
public:
    UVoxelNode_2DGavoronoiNoise();

};

