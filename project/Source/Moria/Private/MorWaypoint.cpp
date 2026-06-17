#include "MorWaypoint.h"

AMorWaypoint::AMorWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->CollisionShape = NULL;
    this->PoiComponent = NULL;
    this->DistanceToSwitchToDepthDelta = 5000.00f;
    this->bWaypointHasBeenFinished = false;
    this->bWaypointHasGivenLore = false;
}

void AMorWaypoint::Multicast_ActivateFor_Implementation(const AMorCharacter* ForWhom) {
}

FMorWaypointData AMorWaypoint::GetWaypointData() {
    return FMorWaypointData{};
}


void AMorWaypoint::Activate(const AMorCharacter* ForWhom) {
}


