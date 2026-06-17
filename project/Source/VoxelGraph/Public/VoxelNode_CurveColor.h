#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_CurveColor.generated.h"

class UCurveLinearColor;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_CurveColor : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* Curve;
    
    UVoxelNode_CurveColor();

};

