#pragma once
#include "CoreMinimal.h"
#include "VoxelLODMaterialsBase.h"
#include "VoxelLODMaterials.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FVoxelLODMaterials : public FVoxelLODMaterialsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    VOXEL_API FVoxelLODMaterials();
};

