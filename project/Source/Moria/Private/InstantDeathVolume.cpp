#include "InstantDeathVolume.h"

AInstantDeathVolume::AInstantDeathVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerEffect = NULL;
    this->AIEffect = NULL;
    this->bUseDeathVolumeManager = false;
}

void AInstantDeathVolume::ComponentBegunOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


