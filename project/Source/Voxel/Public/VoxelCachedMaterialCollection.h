#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialCollectionBase.h"
#include "VoxelMaterialIndices.h"
#include "VoxelCachedMaterialCollection.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelCachedMaterialCollection : public UVoxelMaterialCollectionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FVoxelMaterialIndices, UMaterialInterface*> CachedMaterials;
    
public:
    UVoxelCachedMaterialCollection();

};

