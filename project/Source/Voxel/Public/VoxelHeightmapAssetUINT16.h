#pragma once
#include "CoreMinimal.h"
#include "EVoxelHeightmapImporterMaterialConfig.h"
#include "VoxelHeightmapAsset.h"
#include "VoxelHeightmapImporterWeightmapInfos.h"
#include "VoxelHeightmapAssetUINT16.generated.h"

UCLASS(Blueprintable, HideDropdown)
class VOXEL_API UVoxelHeightmapAssetUINT16 : public UVoxelHeightmapAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Heightmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelHeightmapImporterMaterialConfig MaterialConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WeightMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelHeightmapImporterWeightmapInfos> WeightmapsInfos;
    
    UVoxelHeightmapAssetUINT16();

};

