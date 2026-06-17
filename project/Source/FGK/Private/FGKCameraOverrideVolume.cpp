#include "FGKCameraOverrideVolume.h"

AFGKCameraOverrideVolume::AFGKCameraOverrideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 1.00f;
    this->OverrideStateClass = NULL;
    this->Spline = NULL;
    this->ExtraPullback = -1.00f;
    this->PullbackScale = -1.00f;
}

void AFGKCameraOverrideVolume::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFGKCameraOverrideVolume::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


