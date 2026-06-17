#pragma once
#include "CoreMinimal.h"
#include "VoxelMeshImporterRenderTargetCache.generated.h"

class UMaterialInterface;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelMeshImporterRenderTargetCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ColorsRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* UVsRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LastRenderedColorsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LastRenderedUVsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastRenderedRenderTargetSize;
    
    FVoxelMeshImporterRenderTargetCache();
};

