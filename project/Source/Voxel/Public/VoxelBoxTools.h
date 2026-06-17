#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "ModifiedVoxelMaterial.h"
#include "ModifiedVoxelValue.h"
#include "VoxelIntBox.h"
#include "VoxelPaintMaterial.h"
#include "VoxelToolsBase.h"
#include "VoxelBoxTools.generated.h"

class AVoxelWorld;
class UObject;

UCLASS(Blueprintable)
class VOXEL_API UVoxelBoxTools : public UVoxelToolsBase {
    GENERATED_BODY()
public:
    UVoxelBoxTools();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetValueBoxAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetValueBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetMaterialBoxAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, const FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterialBox(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, const FVoxelPaintMaterial& PaintMaterial, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RemoveBoxAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AddBoxAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void AddBox(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelIntBox& Bounds, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    
};

