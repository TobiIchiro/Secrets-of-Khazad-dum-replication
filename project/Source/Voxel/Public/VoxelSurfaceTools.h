#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "EVoxelComputeDevice.h"
#include "EVoxelFalloff.h"
#include "EVoxelSDFMergeMode.h"
#include "EVoxelSamplerMode.h"
#include "VoxelFloatTexture.h"
#include "VoxelIntBox.h"
#include "VoxelSurfaceEditsProcessedVoxels.h"
#include "VoxelSurfaceEditsStack.h"
#include "VoxelSurfaceEditsStackElement.h"
#include "VoxelSurfaceEditsVoxels.h"
#include "VoxelSurfaceTools.generated.h"

class AVoxelWorld;
class UCurveFloat;
class UObject;

UCLASS(Blueprintable)
class VOXEL_API UVoxelSurfaceTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelSurfaceTools();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStrengthMaskScale(float& ScaleX, float& ScaleY, AVoxelWorld* World, FVoxelFloatTexture Mask, float SizeX, float SizeY, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox GetBounds(FVoxelSurfaceEditsProcessedVoxels Voxels);
    
    UFUNCTION(BlueprintCallable)
    static void FindSurfaceVoxelsFromDistanceField(FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded, EVoxelComputeDevice ComputeDevice);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void FindSurfaceVoxelsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void FindSurfaceVoxels2DAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static void FindSurfaceVoxels2D(FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals);
    
    UFUNCTION(BlueprintCallable)
    static void FindSurfaceVoxels(FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals);
    
    UFUNCTION(BlueprintCallable)
    static void DebugSurfaceVoxels(AVoxelWorld* World, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float LifeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelSurfaceEditsStackElement ApplyTerrace(int32 TerraceHeightInVoxels, float Angle, int32 ImmutableVoxels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelSurfaceEditsStackElement ApplyStrengthMask(AVoxelWorld* World, FVoxelFloatTexture Mask, FVector EditPosition, float ScaleX, float ScaleY, FVector PlaneNormal, FVector PlaneTangent, EVoxelSamplerMode SamplerMode, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelSurfaceEditsStackElement ApplyStrengthCurve(AVoxelWorld* World, FVector Center, float Radius, UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ApplyStackAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack, bool bHideLatentWarnings);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelSurfaceEditsProcessedVoxels ApplyStack(FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelSurfaceEditsStackElement ApplyFlatten(AVoxelWorld* World, FVector PlanePoint, FVector PlaneNormal, EVoxelSDFMergeMode MergeMode, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelSurfaceEditsStackElement ApplyFalloff(AVoxelWorld* World, EVoxelFalloff FalloffType, FVector Center, float Radius, float Falloff, bool bConvertToVoxelSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelSurfaceEditsStackElement ApplyConstantStrength(float Strength);
    
    UFUNCTION(BlueprintCallable)
    static FVoxelSurfaceEditsStack AddToStack(FVoxelSurfaceEditsStack Stack, FVoxelSurfaceEditsStackElement Element);
    
};

