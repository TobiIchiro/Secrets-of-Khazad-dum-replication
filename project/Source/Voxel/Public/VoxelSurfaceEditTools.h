#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "ModifiedVoxelMaterial.h"
#include "ModifiedVoxelValue.h"
#include "VoxelIntBox.h"
#include "VoxelPaintMaterial.h"
#include "VoxelSurfaceEditsProcessedVoxels.h"
#include "VoxelToolsBase.h"
#include "VoxelSurfaceEditTools.generated.h"

class AVoxelWorld;
class UObject;

UCLASS(Blueprintable)
class VOXEL_API UVoxelSurfaceEditTools : public UVoxelToolsBase {
    GENERATED_BODY()
public:
    UVoxelSurfaceEditTools();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void PropagateVoxelMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void PropagateVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void EditVoxelValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void EditVoxelValues(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float DistanceDivisor, bool bMultiThreaded, bool bRecordModifiedValues, bool bUpdateRender);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void EditVoxelMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void EditVoxelMaterials(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVoxelPaintMaterial& PaintMaterial, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bUpdateRender);
    
};

