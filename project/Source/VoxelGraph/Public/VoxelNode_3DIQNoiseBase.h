#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelNode_IQNoiseBase.h"
#include "VoxelNode_3DIQNoiseBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_3DIQNoiseBase : public UVoxelNode_IQNoiseBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    UVoxelNode_3DIQNoiseBase();

};

