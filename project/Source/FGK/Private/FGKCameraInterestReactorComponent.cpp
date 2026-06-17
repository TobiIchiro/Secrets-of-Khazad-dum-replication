#include "FGKCameraInterestReactorComponent.h"

UFGKCameraInterestReactorComponent::UFGKCameraInterestReactorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LerpOutTime = 0.50f;
}

void UFGKCameraInterestReactorComponent::OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFGKCameraInterestReactorComponent::OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


