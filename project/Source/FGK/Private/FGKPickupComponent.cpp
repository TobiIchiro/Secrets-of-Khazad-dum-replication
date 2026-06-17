#include "FGKPickupComponent.h"

UFGKPickupComponent::UFGKPickupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnDelaySeconds = 0.00f;
    this->PickupType = EPickupType::Simple;
    this->bAlwaysUse = true;
    this->ActivationDelay = 0.50f;
}

void UFGKPickupComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


