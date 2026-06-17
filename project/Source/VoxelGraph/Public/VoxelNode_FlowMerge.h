#pragma once
#include "CoreMinimal.h"
#include "VoxelNamedDataPin.h"
#include "VoxelNode.h"
#include "VoxelNode_FlowMerge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_FlowMerge : public UVoxelNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelNamedDataPin> Types;
    
    UVoxelNode_FlowMerge();

};

