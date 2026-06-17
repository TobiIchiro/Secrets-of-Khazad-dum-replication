#pragma once
#include "CoreMinimal.h"
#include "VoxelInstancedMaterialCollection.h"
#include "VoxelInstancedMaterialCollectionInstance.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelInstancedMaterialCollectionInstance : public UVoxelInstancedMaterialCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelInstancedMaterialCollection* LayersSource;
    
    UVoxelInstancedMaterialCollectionInstance();

};

