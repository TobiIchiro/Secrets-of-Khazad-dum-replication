#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_CraterNoise.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CraterNoise : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffExponent;
    
    UVoxelNode_CraterNoise();

};

