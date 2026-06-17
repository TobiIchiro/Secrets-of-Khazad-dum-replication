#include "VoxelAssetTools.h"

UVoxelAssetTools::UVoxelAssetTools() {
}

void UVoxelAssetTools::SetDataAssetMaterial(UVoxelDataAsset* Asset, UVoxelDataAsset*& NewAsset, FVoxelMaterial Material) {
}

void UVoxelAssetTools::InvertDataAsset(UVoxelDataAsset* Asset, UVoxelDataAsset*& InvertedAsset) {
}

void UVoxelAssetTools::ImportModifierAssetAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace, bool bHideLatentWarnings) {
}

void UVoxelAssetTools::ImportModifierAsset(AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bModifyValues, bool bModifyMaterials, bool bLockEntireWorld, bool bConvertToVoxelSpace) {
}

void UVoxelAssetTools::ImportDataAssetFastAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, UVoxelDataAsset* Asset, FVector Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings) {
}

void UVoxelAssetTools::ImportDataAssetFast(AVoxelWorld* World, UVoxelDataAsset* Asset, FVector Position, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace) {
}

void UVoxelAssetTools::ImportAssetAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace, bool bHideLatentWarnings) {
}

void UVoxelAssetTools::ImportAssetAsReferenceAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelAssetItemReference& Reference, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelAssetTools::ImportAssetAsReference(FVoxelAssetItemReference& Reference, AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, int32 Priority, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

void UVoxelAssetTools::ImportAsset(AVoxelWorld* World, UVoxelTransformableGeneratorInstanceWrapper* Asset, FTransform Transform, FVoxelIntBox Bounds, bool bSubtractive, EVoxelAssetMergeMode MergeMode, bool bConvertToVoxelSpace) {
}

UVoxelDataAsset* UVoxelAssetTools::CreateDataAssetFromWorldSection(AVoxelWorld* World, FVoxelIntBox Bounds, bool bCopyMaterials) {
    return NULL;
}

void UVoxelAssetTools::AddDisableEditsBoxAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FVoxelDisableEditsBoxItemReference& Reference, AVoxelWorld* World, FVoxelIntBox Bounds, bool bHideLatentWarnings) {
}

void UVoxelAssetTools::AddDisableEditsBox(FVoxelDisableEditsBoxItemReference& Reference, AVoxelWorld* World, FVoxelIntBox Bounds) {
}


