#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_ColorParameter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_ColorParameter : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UVoxelNode_ColorParameter();

};

