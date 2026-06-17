#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialCollectionMaterialInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelMaterialCollectionMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameOverride;
    
    FVoxelMaterialCollectionMaterialInfo();
};

