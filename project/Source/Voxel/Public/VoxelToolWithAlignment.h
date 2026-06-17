#pragma once
#include "CoreMinimal.h"
#include "EVoxelToolAlignment.h"
#include "VoxelToolBase.h"
#include "VoxelToolWithAlignment.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelToolWithAlignment : public UVoxelToolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelToolAlignment Alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCamera;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPlanePreview;
    
    UVoxelToolWithAlignment();

};

