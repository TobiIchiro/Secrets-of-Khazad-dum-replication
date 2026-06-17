#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_CraterNoiseFractal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CraterNoiseFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalloffExponent;
    
    UVoxelNode_CraterNoiseFractal();

};

