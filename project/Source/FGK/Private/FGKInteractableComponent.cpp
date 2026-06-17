#include "FGKInteractableComponent.h"
#include "Net/UnrealNetwork.h"

UFGKInteractableComponent::UFGKInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterState = NULL;
    this->InputState = NULL;
    this->CameraState = NULL;
    this->SequencerState = NULL;
    this->bEnabled = true;
}

void UFGKInteractableComponent::SetEnabled(bool bToEnable) {
}


void UFGKInteractableComponent::EnableForInteractor(AActor* Interactor) {
}

void UFGKInteractableComponent::DisableForInteractor(AActor* Interactor) {
}

void UFGKInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKInteractableComponent, bEnabled);
}


