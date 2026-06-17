#pragma once
#include "CoreMinimal.h"
#include "EVoxelCellularDistanceFunction.h"
#include "EVoxelCellularReturnType.h"
#include "VoxelNode_NoiseNode.h"
#include "VoxelNode_CellularNoise.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CellularNoise : public UVoxelNode_NoiseNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelCellularDistanceFunction DistanceFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelCellularReturnType ReturnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Jitter;
    
    UVoxelNode_CellularNoise();

};

