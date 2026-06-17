#include "VoxelLineBatchComponent.h"

UVoxelLineBatchComponent::UVoxelLineBatchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseEditorCompositing = true;
    this->DefaultLifeTime = 1.00f;
    this->bCalculateAccurateBounds = false;
}


