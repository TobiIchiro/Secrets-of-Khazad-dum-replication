#pragma once
#include "CoreMinimal.h"
#include "EVoxelRGBA.h"
#include "VoxelLandscapeImporterLayerInfo.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelLandscapeImporterLayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelRGBA Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    FVoxelLandscapeImporterLayerInfo();
};

