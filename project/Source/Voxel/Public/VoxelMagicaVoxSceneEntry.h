#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VoxelMagicaVoxSceneEntry.generated.h"

class UVoxelDataAsset;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelMagicaVoxSceneEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelDataAsset* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Layer;
    
    FVoxelMagicaVoxSceneEntry();
};

