#include "VoxelPlaceableItemActor.h"

AVoxelPlaceableItemActor::AVoxelPlaceableItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewWorld = NULL;
    this->bOnlyImportIntoPreviewWorld = true;
}

int32 AVoxelPlaceableItemActor::K2_GetPriority_Implementation() const {
    return 0;
}

void AVoxelPlaceableItemActor::K2_AddItemToWorld_Implementation(AVoxelWorld* World) {
}


