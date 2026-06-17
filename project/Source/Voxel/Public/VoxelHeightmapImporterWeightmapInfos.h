#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EVoxelRGBA.h"
#include "VoxelHeightmapImporterWeightmapInfos.generated.h"

USTRUCT(BlueprintType)
struct FVoxelHeightmapImporterWeightmapInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath File;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelRGBA Layer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    VOXEL_API FVoxelHeightmapImporterWeightmapInfos();
};

