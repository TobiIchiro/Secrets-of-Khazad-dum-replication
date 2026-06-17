#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVoxelCubicFace.h"
#include "VoxelMaterialCollectionMaterialInfo.h"
#include "VoxelBlueprintMaterialCollectionInterface.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class VOXEL_API UVoxelBlueprintMaterialCollectionInterface : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMaterialsToBlendAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCubicFaces;
    
    UVoxelBlueprintMaterialCollectionInterface();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FVoxelMaterialCollectionMaterialInfo> GetMaterials();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInterface* GetMaterialForIndices(const TArray<uint8>& Indices);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInterface* GetMaterialForIndex(int32 Index, EVoxelCubicFace Face);
    
};

