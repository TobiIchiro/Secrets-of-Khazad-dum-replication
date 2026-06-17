#include "WatcherGuardPoint.h"

AWatcherGuardPoint::AWatcherGuardPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZoneType = EWatcherZone::WatcherZone_Neutral;
    this->bSpawnPoint = false;
    this->bSpawnPointOnly = false;
    this->bSearchTargets = true;
}

bool AWatcherGuardPoint::IsLocationInGuardPoint(const FVector& Location) const {
    return false;
}

bool AWatcherGuardPoint::IsActorInGuardPoint(const AActor* Actor) const {
    return false;
}

float AWatcherGuardPoint::GetGuardPointRadius() const {
    return 0.0f;
}


