#include "WaypointSpawnerComponent.h"

UWaypointSpawnerComponent::UWaypointSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UWaypointSpawnerComponent::ServerSpawnWaypoint_Implementation(FMorWaypointData WaypointData) {
}

void UWaypointSpawnerComponent::ServerSetWaypointVisibility_Implementation(int32 WaypointId, bool bNewWorldVisibility, bool bNewMinimapVisibility) {
}

void UWaypointSpawnerComponent::ServerEditWaypoint_Implementation(FMorWaypointData NewWaypointData) {
}

void UWaypointSpawnerComponent::ServerDeleteWaypoint_Implementation(FMorWaypointData WaypointData) {
}

void UWaypointSpawnerComponent::ClientSetWaypointVisibility_Implementation(int32 WaypointId, bool bNewVisible) {
}

void UWaypointSpawnerComponent::ClientOnFinishedSpawnWaypoint_Implementation(int32 WaypointId) {
}


