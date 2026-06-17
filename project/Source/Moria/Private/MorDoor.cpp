#include "MorDoor.h"

AMorDoor::AMorDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDoorOpen = false;
    this->bPostActiveInitCalled = false;
    this->bOpenInward = false;
    this->DoorFSMComp = NULL;
    this->bAllowNpcInteract = true;
    this->NPCTrackerVolume = NULL;
}

void AMorDoor::SetDoorState_Implementation() {
}

void AMorDoor::OnNPCTrackerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMorDoor::OnNPCTrackerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


