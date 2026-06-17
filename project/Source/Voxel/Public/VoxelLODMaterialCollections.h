#pragma once
#include "CoreMinimal.h"
#include "VoxelLODMaterialsBase.h"
#include "VoxelLODMaterialCollections.generated.h"

class UVoxelMaterialCollectionBase;

USTRUCT(BlueprintType)
struct FVoxelLODMaterialCollections : public FVoxelLODMaterialsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelMaterialCollectionBase* MaterialCollection;
    
    VOXEL_API FVoxelLODMaterialCollections();
};

