#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNodeWithDerivativeFractal.h"
#include "VoxelNode_2DErosion.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DErosion : public UVoxelNode_NoiseNodeWithDerivativeFractal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jitter;
    
    UVoxelNode_2DErosion();

};

