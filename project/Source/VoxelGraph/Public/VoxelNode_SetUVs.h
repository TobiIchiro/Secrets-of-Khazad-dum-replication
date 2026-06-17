#pragma once
#include "CoreMinimal.h"
#include "VoxelNode_MaterialSetter.h"
#include "VoxelNode_SetUVs.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOXELGRAPH_API UVoxelNode_SetUVs : public UVoxelNode_MaterialSetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetV;
    
    UVoxelNode_SetUVs();

};

