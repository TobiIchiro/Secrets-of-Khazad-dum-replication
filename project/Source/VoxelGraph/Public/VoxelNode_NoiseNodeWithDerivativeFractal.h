#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeFractal.h"
#include "VoxelNode_NoiseNodeWithDerivativeFractal.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_NoiseNodeWithDerivativeFractal : public UVoxelNode_NoiseNodeFractal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeDerivative;
    
    UVoxelNode_NoiseNodeWithDerivativeFractal();

};

