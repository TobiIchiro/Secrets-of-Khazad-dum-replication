#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_IQNoiseBase.h"
#include "VoxelNode_2DIQNoiseBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_2DIQNoiseBase : public UVoxelNode_IQNoiseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UVoxelNode_2DIQNoiseBase();

};

