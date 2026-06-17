#include "VoxelWorldVolume.h"

AVoxelWorldVolume::AVoxelWorldVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsVolumeEnabled = true;
    this->bEditorOnlyVolume = false;
}

bool AVoxelWorldVolume::ShouldUseVolume_Implementation(AVoxelWorld* VoxelWorld) const {
    return false;
}

void AVoxelWorldVolume::RefreshAllVoxelVolumes() {
}


