#include "MorLandmarkWaypointMarker.h"

AMorLandmarkWaypointMarker::AMorLandmarkWaypointMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDiscoverWaypointOnEntry = true;
}

void AMorLandmarkWaypointMarker::OnLandmarkWaypointEnteredNotif(FGameplayTag LandmarkId, AMorCharacter* Character, bool FirstDiscovery) {
}

FMorWaypointRowHandle AMorLandmarkWaypointMarker::GetWaypointRowHandle() const {
    return FMorWaypointRowHandle{};
}

FMorWaypointData AMorLandmarkWaypointMarker::GetWaypointData() const {
    return FMorWaypointData{};
}


