#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_NoiseNodeWithDerivative.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_NoiseNodeWithDerivative : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeDerivative;
    
    UVoxelNode_NoiseNodeWithDerivative();

};

