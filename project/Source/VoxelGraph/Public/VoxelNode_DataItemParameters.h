#pragma once
#include "CoreMinimal.h"
#include "VoxelNodeWithContext.h"
#include "VoxelNode_DataItemParameters.generated.h"

class UVoxelGraphDataItemConfig;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_DataItemParameters : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelGraphDataItemConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> PreviewValues;
    
    UVoxelNode_DataItemParameters();

};

