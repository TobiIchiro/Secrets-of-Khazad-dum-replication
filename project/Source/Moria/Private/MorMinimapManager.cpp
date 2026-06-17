#include "MorMinimapManager.h"

AMorMinimapManager::AMorMinimapManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SmallMinimapZOrder = -10;
    this->LargeMinimapZOrder = -10;
    this->LastRegisteredMinimapWidget = NULL;
}

void AMorMinimapManager::UpdateWaypoint(FMorWaypointData& WaypointData) {
}

void AMorMinimapManager::UpdateFogOfWar(const FGuid& PlayerGuid, UWorldLayoutBubble* Bubble) {
}

void AMorMinimapManager::SetStartingDiscoveredZones(const TArray<FMorZoneRowHandle>& DiscoveredZones) {
}

void AMorMinimapManager::RemoveWaypointFromMap(FMorWaypointData WaypointData) {
}

void AMorMinimapManager::HandleOnZoneDiscovered(FGuid PlayerID, const FMorZoneRowHandle& ZoneRowHandle, bool bManuallyTrigger, bool bFirstDiscovery) {
}

void AMorMinimapManager::HandleOnWorldReady() {
}

void AMorMinimapManager::HandleMapColorSetChanged(int32 InMapColorSet) {
}

FVector AMorMinimapManager::GetLocalPlayerCellPosition(bool& bOutIsValid) const {
    return FVector{};
}

int32 AMorMinimapManager::GetLayerForWorldPosition(const FVector& WorldPosition, bool& bOutIsValid) const {
    return 0;
}

int32 AMorMinimapManager::GetLayerForCellPosition(const FVector& CellPosition, bool& bOutIsValid) const {
    return 0;
}

int32 AMorMinimapManager::GetLayerForCellCoords(const FIntVector& CellCoords, bool& bOutIsValid) const {
    return 0;
}

FMorFogOfWarRef AMorMinimapManager::GetFogOfWarRef() {
    return FMorFogOfWarRef{};
}

int32 AMorMinimapManager::GetChapterForWorldPosition(const FVector& WorldPosition, bool& bOutIsValid) const {
    return 0;
}

int32 AMorMinimapManager::GetChapterForCellPosition(const FVector& CellPosition, bool& bOutIsValid) const {
    return 0;
}

int32 AMorMinimapManager::GetChapterForCellCoords(const FIntVector& CellCoords, bool& bOutIsValid) const {
    return 0;
}

int32 AMorMinimapManager::GetChapterAtLocalPlayerPosition(bool& bOutIsValid) const {
    return 0;
}

int32 AMorMinimapManager::GetChapterAt(const FIntVector& CellPosition, bool& bOutIsValid) const {
    return 0;
}

AMorMinimapManager* AMorMinimapManager::Get(UObject* WorldContext) {
    return NULL;
}




