#pragma once
#include "CoreMinimal.h"
#include "VoxelPaintMaterial_MaterialCollectionChannel.h"
#include "VoxelPaintMaterialMultiIndexRaw.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPaintMaterialMultiIndexRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterial_MaterialCollectionChannel Channel0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterial_MaterialCollectionChannel Channel1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterial_MaterialCollectionChannel Channel2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelPaintMaterial_MaterialCollectionChannel Channel3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength3;
    
    VOXEL_API FVoxelPaintMaterialMultiIndexRaw();
};

