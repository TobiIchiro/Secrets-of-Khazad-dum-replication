#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "VoxelCompressedWorldSave.h"
#include "VoxelDataMemoryUsageInMB.h"
#include "VoxelFindClosestNonEmptyVoxelResult.h"
#include "VoxelIntBox.h"
#include "VoxelMaterial.h"
#include "VoxelUncompressedWorldSave.h"
#include "VoxelValueMaterial.h"
#include "VoxelDataTools.generated.h"

class AVoxelWorld;
class UObject;
class UVoxelHeightmapAsset;

UCLASS(Blueprintable)
class VOXEL_API UVoxelDataTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelDataTools();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetValueAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FIntVector Position, float Value, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetValue(AVoxelWorld* World, FIntVector Position, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetMaterialAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FIntVector Position, FVoxelMaterial Material, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaterial(AVoxelWorld* World, FIntVector Position, FVoxelMaterial Material, int32 Mask);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetBoxAsDirtyAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoxAsDirty(AVoxelWorld* World, FVoxelIntBox Bounds, bool bDirtyValues, bool bDirtyMaterials);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RoundVoxelsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void RoundVoxels(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RoundToGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void RoundToGenerator(AVoxelWorld* World, FVoxelIntBox Bounds, bool bPreserveNormals);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFromSave(const AVoxelWorld* World, const FVoxelUncompressedWorldSave& Save);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadFromCompressedSave(const AVoxelWorld* World, const FVoxelCompressedWorldSave& Save);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetVoxelsValueAndMaterialAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FVoxelValueMaterial>& Voxels, AVoxelWorld* World, const TArray<FIntVector>& Positions, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void GetVoxelsValueAndMaterial(TArray<FVoxelValueMaterial>& Voxels, AVoxelWorld* World, const TArray<FIntVector>& Positions);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetValueAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float& Value, AVoxelWorld* World, FIntVector Position, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void GetValue(float& Value, AVoxelWorld* World, FIntVector Position);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetSaveAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void GetSave(AVoxelWorld* World, FVoxelUncompressedWorldSave& OutSave);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetMaterialAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelMaterial& Material, AVoxelWorld* World, FIntVector Position, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void GetMaterial(FVoxelMaterial& Material, AVoxelWorld* World, FIntVector Position);
    
    UFUNCTION(BlueprintCallable)
    static void GetInterpolatedValue(float& Value, AVoxelWorld* World, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelDataMemoryUsageInMB GetDataMemoryUsageInMB(AVoxelWorld* World);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetCompressedSaveAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void GetCompressedSave(AVoxelWorld* World, FVoxelCompressedWorldSave& OutSave);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void FindClosestNonEmptyVoxelAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelFindClosestNonEmptyVoxelResult& Result, AVoxelWorld* World, FVector Position, bool bReadMaterial, bool bConvertToVoxelSpace, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void FindClosestNonEmptyVoxel(FVoxelFindClosestNonEmptyVoxelResult& Result, AVoxelWorld* World, FVector Position, bool bReadMaterial, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable)
    static void CompressIntoHeightmap(AVoxelWorld* World, UVoxelHeightmapAsset* HeightmapAsset, bool bHeightmapAssetMatchesWorld);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ClearUnusedMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ClearUnusedMaterials(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ClearCachedValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCachedValues(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ClearCachedMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCachedMaterials(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CheckIfSameAsGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CheckIfSameAsGenerator(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CheckForSingleValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CheckForSingleValues(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CheckForSingleMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CheckForSingleMaterials(AVoxelWorld* World, FVoxelIntBox Bounds);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CacheValuesAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CacheValues(AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CacheMaterialsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void CacheMaterials(AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded);
    
};

