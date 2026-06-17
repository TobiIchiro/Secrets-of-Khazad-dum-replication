#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelMaterialCollectionMaterialInfo.h"
#include "VoxelMaterialCollectionBase.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelMaterialCollectionBase : public UObject {
    GENERATED_BODY()
public:
    UVoxelMaterialCollectionBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVoxelMaterialCollectionMaterialInfo> GetMaterials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaterialIndex(FName Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetIndexMaterial(uint8 Index) const;
    
};

