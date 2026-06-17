#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ModifiedVoxelMaterial.h"
#include "ModifiedVoxelValue.h"
#include "VoxelIntBox.h"
#include "VoxelToolsBase.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelToolsBase : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelToolsBase();

    UFUNCTION(BlueprintCallable)
    static FVoxelIntBox GetModifiedVoxelValuesBounds(const TArray<FModifiedVoxelValue>& ModifiedVoxels);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelIntBox GetModifiedVoxelMaterialsBounds(const TArray<FModifiedVoxelMaterial>& ModifiedVoxels);
    
};

