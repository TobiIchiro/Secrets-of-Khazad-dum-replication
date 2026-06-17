#include "WatcherZoneCenter.h"

AWatcherZoneCenter::AWatcherZoneCenter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSpawnPoint = false;
    this->bSpawnPointOnly = false;
    this->bSearchTargets = false;
    this->bShockWaveAttackPoint = false;
}

bool AWatcherZoneCenter::IsLocationInZone(const FVector& Location) const {
    return false;
}

bool AWatcherZoneCenter::IsActorInZone(const AActor* Actor) const {
    return false;
}

float AWatcherZoneCenter::GetZoneRadius() const {
    return 0.0f;
}


