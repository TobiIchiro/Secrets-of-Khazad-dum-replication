#include "VoxelPlaceableItemManager.h"

UVoxelPlaceableItemManager::UVoxelPlaceableItemManager() {
    this->bEnableDebug = true;
    this->bDebugBounds = false;
    this->GeneratorCache = NULL;
}

void UVoxelPlaceableItemManager::OnGenerate_Implementation() {
}

void UVoxelPlaceableItemManager::OnClear_Implementation() {
}

UVoxelGeneratorCache* UVoxelPlaceableItemManager::GetGeneratorCache() const {
    return NULL;
}

void UVoxelPlaceableItemManager::DrawDebugPoint(FVector Position, FLinearColor Color) {
}

void UVoxelPlaceableItemManager::DrawDebugLine(FVector Start, FVector End, FLinearColor Color) {
}

void UVoxelPlaceableItemManager::AddDataItem(FVoxelDataItemConstructionInfo Info) {
}


