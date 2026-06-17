#pragma once
#include "CoreMinimal.h"
#include "EVoxelPaintMaterialType.h"
#include "VoxelPaintMaterialColor.h"
#include "VoxelPaintMaterialFiveWayBlend.h"
#include "VoxelPaintMaterialMultiIndex.h"
#include "VoxelPaintMaterialMultiIndexRaw.h"
#include "VoxelPaintMaterialMultiIndexWetness.h"
#include "VoxelPaintMaterialSingleIndex.h"
#include "VoxelPaintMaterialUV.h"
#include "VoxelPaintMaterial.generated.h"

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelPaintMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelPaintMaterialType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialSingleIndex SingleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialMultiIndex MultiIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialUV UV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterialFiveWayBlend FiveWayBlend;
    
    FVoxelPaintMaterial();
};

