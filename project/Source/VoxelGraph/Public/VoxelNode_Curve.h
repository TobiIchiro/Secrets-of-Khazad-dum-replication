#pragma once
#include "CoreMinimal.h"
#include "VoxelExposedNode.h"
#include "VoxelNode_Curve.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_Curve : public UVoxelExposedNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UVoxelNode_Curve();

};

