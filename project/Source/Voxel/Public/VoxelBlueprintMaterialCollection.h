#pragma once
#include "CoreMinimal.h"
#include "VoxelCachedMaterialCollection.h"
#include "VoxelBlueprintMaterialCollection.generated.h"

class UVoxelBlueprintMaterialCollectionInterface;

UCLASS(Blueprintable)
class VOXEL_API UVoxelBlueprintMaterialCollection : public UVoxelCachedMaterialCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoxelBlueprintMaterialCollectionInterface* Instance;
    
    UVoxelBlueprintMaterialCollection();

};

