#include "MorZoneAmbienceManager.h"

AMorZoneAmbienceManager::AMorZoneAmbienceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->Player = NULL;
    this->WorldLayout = NULL;
    this->BiomeManager = NULL;
    this->MusicActor = NULL;
    this->AkComponent = NULL;
    this->PlayerBubble = NULL;
    this->MinTimeBetweenCues = 5.00f;
    this->MaxTimeBetweenCues = 15.00f;
    this->MinCuePhysicalDistance = 2000.00f;
    this->MaxCuePhysicalDistance = 4000.00f;
    this->WorldCuePlayer = NULL;
}

void AMorZoneAmbienceManager::PlayAmbientCueAtLocation_Implementation(UAkAudioEvent* Event, FVector WorldLocation) {
}

void AMorZoneAmbienceManager::MulticastAkAudioEvent_Implementation(UAkAudioEvent* Event, FVector WorldLocation) {
}


