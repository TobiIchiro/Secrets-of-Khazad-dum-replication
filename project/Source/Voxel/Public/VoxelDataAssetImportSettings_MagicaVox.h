#pragma once
#include "CoreMinimal.h"
#include "VoxelDataAssetImportSettings_MagicaVox.generated.h"

USTRUCT(BlueprintType)
struct FVoxelDataAssetImportSettings_MagicaVox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModelIndex;
    
    VOXEL_API FVoxelDataAssetImportSettings_MagicaVox();
};

