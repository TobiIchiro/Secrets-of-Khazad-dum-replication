#include "VoxelSurfaceTools.h"

UVoxelSurfaceTools::UVoxelSurfaceTools() {
}

void UVoxelSurfaceTools::GetStrengthMaskScale(float& ScaleX, float& ScaleY, AVoxelWorld* World, FVoxelFloatTexture Mask, float SizeX, float SizeY, bool bConvertToVoxelSpace) {
}

FVoxelIntBox UVoxelSurfaceTools::GetBounds(FVoxelSurfaceEditsProcessedVoxels Voxels) {
    return FVoxelIntBox{};
}

void UVoxelSurfaceTools::FindSurfaceVoxelsFromDistanceField(FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bMultiThreaded, EVoxelComputeDevice ComputeDevice) {
}

void UVoxelSurfaceTools::FindSurfaceVoxelsAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings) {
}

void UVoxelSurfaceTools::FindSurfaceVoxels2DAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals, bool bHideLatentWarnings) {
}

void UVoxelSurfaceTools::FindSurfaceVoxels2D(FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals) {
}

void UVoxelSurfaceTools::FindSurfaceVoxels(FVoxelSurfaceEditsVoxels& Voxels, AVoxelWorld* World, FVoxelIntBox Bounds, bool bComputeNormals) {
}

void UVoxelSurfaceTools::DebugSurfaceVoxels(AVoxelWorld* World, const FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, float LifeTime) {
}

FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyTerrace(int32 TerraceHeightInVoxels, float Angle, int32 ImmutableVoxels) {
    return FVoxelSurfaceEditsStackElement{};
}

FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyStrengthMask(AVoxelWorld* World, FVoxelFloatTexture Mask, FVector EditPosition, float ScaleX, float ScaleY, FVector PlaneNormal, FVector PlaneTangent, EVoxelSamplerMode SamplerMode, bool bConvertToVoxelSpace) {
    return FVoxelSurfaceEditsStackElement{};
}

FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyStrengthCurve(AVoxelWorld* World, FVector Center, float Radius, UCurveFloat* StrengthCurve, bool bConvertToVoxelSpace) {
    return FVoxelSurfaceEditsStackElement{};
}

void UVoxelSurfaceTools::ApplyStackAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelSurfaceEditsProcessedVoxels& ProcessedVoxels, FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack, bool bHideLatentWarnings) {
}

FVoxelSurfaceEditsProcessedVoxels UVoxelSurfaceTools::ApplyStack(FVoxelSurfaceEditsVoxels Voxels, FVoxelSurfaceEditsStack Stack) {
    return FVoxelSurfaceEditsProcessedVoxels{};
}

FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyFlatten(AVoxelWorld* World, FVector PlanePoint, FVector PlaneNormal, EVoxelSDFMergeMode MergeMode, bool bConvertToVoxelSpace) {
    return FVoxelSurfaceEditsStackElement{};
}

FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyFalloff(AVoxelWorld* World, EVoxelFalloff FalloffType, FVector Center, float Radius, float Falloff, bool bConvertToVoxelSpace) {
    return FVoxelSurfaceEditsStackElement{};
}

FVoxelSurfaceEditsStackElement UVoxelSurfaceTools::ApplyConstantStrength(float Strength) {
    return FVoxelSurfaceEditsStackElement{};
}

FVoxelSurfaceEditsStack UVoxelSurfaceTools::AddToStack(FVoxelSurfaceEditsStack Stack, FVoxelSurfaceEditsStackElement Element) {
    return FVoxelSurfaceEditsStack{};
}


