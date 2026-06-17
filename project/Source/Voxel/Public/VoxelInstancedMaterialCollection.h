#pragma once
#include "CoreMinimal.h"
#include "VoxelCachedMaterialCollection.h"
#include "VoxelInstancedMaterialCollectionLayer.h"
#include "VoxelInstancedMaterialCollection.generated.h"

class UVoxelInstancedMaterialCollectionTemplates;

UCLASS(Blueprintable)
class VOXEL_API UVoxelInstancedMaterialCollection : public UVoxelCachedMaterialCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMaterialsToBlendAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Redirects;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParametersPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelInstancedMaterialCollectionTemplates* Templates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelInstancedMaterialCollectionLayer> Layers;
    
    UVoxelInstancedMaterialCollection();

};

