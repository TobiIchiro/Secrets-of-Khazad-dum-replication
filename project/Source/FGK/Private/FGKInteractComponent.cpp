#include "FGKInteractComponent.h"
#include "Net/UnrealNetwork.h"

UFGKInteractComponent::UFGKInteractComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SelectedInteractable = NULL;
}

void UFGKInteractComponent::Server_SetSelectedInteractable_Implementation(AActor* InInteractable) {
}

void UFGKInteractComponent::Server_InteractedWith_Implementation(AActor* Interactable) {
}

AActor* UFGKInteractComponent::GetSelectedInteractable() const {
    return NULL;
}

void UFGKInteractComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKInteractComponent, SelectedInteractable);
}


