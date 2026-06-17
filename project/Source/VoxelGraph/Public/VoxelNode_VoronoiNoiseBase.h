#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeHelper.h"
#include "VoxelNode_VoronoiNoiseBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_VoronoiNoiseBase : public UVoxelNodeHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeNeighbors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Dimension;
    
    UVoxelNode_VoronoiNoiseBase();

};

