#include "VoxelMeshImporterLibrary.h"

UVoxelMeshImporterLibrary::UVoxelMeshImporterLibrary() {
}

UTextureRenderTarget2D* UVoxelMeshImporterLibrary::CreateTextureFromMaterial(UObject* WorldContextObject, UMaterialInterface* Material, int32 Width, int32 Height) {
    return NULL;
}

UVoxelMeshImporterInputData* UVoxelMeshImporterLibrary::CreateMeshDataFromStaticMesh(UStaticMesh* StaticMesh) {
    return NULL;
}

void UVoxelMeshImporterLibrary::ConvertMeshToVoxels_NoMaterials(UObject* WorldContextObject, UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettingsBase Settings, UVoxelDataAsset*& Asset, int32& NumLeaks) {
}

void UVoxelMeshImporterLibrary::ConvertMeshToVoxels(UObject* WorldContextObject, UVoxelMeshImporterInputData* Mesh, FTransform Transform, bool bSubtractive, FVoxelMeshImporterSettings Settings, FVoxelMeshImporterRenderTargetCache& RenderTargetCache, UVoxelDataAsset*& Asset, int32& NumLeaks) {
}


