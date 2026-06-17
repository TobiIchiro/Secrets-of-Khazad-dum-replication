#include "BPMoriaInteractable.h"

ABPMoriaInteractable::ABPMoriaInteractable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bItemMustBeHeld = false;
}

void ABPMoriaInteractable::OnLocalInteract_Implementation(ACharacter* Interactor) {
}

void ABPMoriaInteractable::OnInteract_Implementation(ACharacter* Interactor) {
}

FText ABPMoriaInteractable::DoGetMissingItemInteractText_Implementation(const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

FText ABPMoriaInteractable::DoGetInteractText_Implementation(const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

EInteractState ABPMoriaInteractable::DoGetInteractState_Implementation(const ACharacter* Interactor) const {
    return EInteractState::Interactable;
}


