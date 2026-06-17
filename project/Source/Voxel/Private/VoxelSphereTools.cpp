#include "VoxelSphereTools.h"

UVoxelSphereTools::UVoxelSphereTools() {
}

void UVoxelSphereTools::TrimSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::TrimSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, const FVector& Normal, float Radius, float Falloff, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::SmoothSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::SmoothSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::SmoothMaterialSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::SmoothMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Strength, int32 NumIterations, int32 Mask, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::SetValueSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::SetValueSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float Value, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::SetMaterialSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::SetMaterialSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, const FVoxelPaintMaterial& PaintMaterial, float Strength, EVoxelFalloff FalloffType, float Falloff, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::RevertSphereToGeneratorAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::RevertSphereToGenerator(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::RevertSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::RevertSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, int32 HistoryPosition, bool bRevertValues, bool bRevertMaterials, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::RemoveSphereWithDurabilityAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, FVoxelInt32Interval Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::RemoveSphereWithDurability(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, FVoxelInt32Interval Interval, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::RemoveSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::RemoveSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::ApplyMaterialKernelSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::ApplyMaterialKernelSphere(TArray<FModifiedVoxelMaterial>& ModifiedMaterials, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, int32 Mask, bool bMultiThreaded, bool bRecordModifiedMaterials, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::ApplyKernelSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::ApplyKernelSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, float CenterMultiplier, float FirstDegreeNeighborMultiplier, float SecondDegreeNeighborMultiplier, float ThirdDegreeNeighborMultiplier, int32 NumIterations, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelSphereTools::AddSphereAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelSphereTools::AddSphere(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& Position, float Radius, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}


