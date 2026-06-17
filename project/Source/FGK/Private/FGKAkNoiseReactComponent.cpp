#include "FGKAkNoiseReactComponent.h"
#include "Components/PrimitiveComponent.h"

UFGKAkNoiseReactComponent::UFGKAkNoiseReactComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
    this->bLocalPlayerOnly = false;
    this->TriggerClass = UPrimitiveComponent::StaticClass();
    this->SoundBegin = NULL;
    this->SoundEnd = NULL;
    this->CooldownInSeconds = 0.00f;
    this->Probability = 1.00f;
}

void UFGKAkNoiseReactComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UFGKAkNoiseReactComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


