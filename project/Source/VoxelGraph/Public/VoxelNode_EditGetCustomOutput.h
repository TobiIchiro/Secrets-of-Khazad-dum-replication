#pragma once
#include "CoreMinimal.h"
#include "VoxelGraphAssetNode.h"
#include "VoxelNode_EditGetCustomOutput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_EditGetCustomOutput : public UVoxelGraphAssetNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputName;
    
    UVoxelNode_EditGetCustomOutput();

};

