#pragma once
#include "CoreMinimal.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelNodeWithContext.h"
#include "VoxelGraphAssetNode.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelGraphAssetNode : public UVoxelNodeWithContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker DefaultGenerator;
    
    UVoxelGraphAssetNode();

};

