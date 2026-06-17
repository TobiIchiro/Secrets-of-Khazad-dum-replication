#include "VoxelDataItemActor.h"

AVoxelDataItemActor::AVoxelDataItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutomaticUpdates = true;
    this->RefreshDelay = 0.10f;
}

void AVoxelDataItemActor::ScheduleRefresh() {
}

void AVoxelDataItemActor::K2_AddItemToWorld_Implementation(AVoxelWorld* World) {
}


