#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_BoolParameter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_BoolParameter : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UVoxelNode_BoolParameter();

};

