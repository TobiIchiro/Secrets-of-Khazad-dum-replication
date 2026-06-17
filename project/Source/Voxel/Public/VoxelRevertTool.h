#pragma once
#include "CoreMinimal.h"
#include "VoxelSphereToolBase.h"
#include "VoxelRevertTool.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelRevertTool : public UVoxelSphereToolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRevertMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HistoryPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHistoryPosition;
    
    UVoxelRevertTool();

};

