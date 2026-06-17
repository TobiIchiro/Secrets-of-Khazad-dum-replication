#include "MorInteractableState_Interact.h"

UMorInteractableState_Interact::UMorInteractableState_Interact() {
}

void UMorInteractableState_Interact::LocalInteract_Implementation(ACharacter* Interactor) {
}

void UMorInteractableState_Interact::Interact_Implementation(ACharacter* Interactor) {
}

EInteractState UMorInteractableState_Interact::GetState_Implementation(const ACharacter* Interactor) const {
    return EInteractState::Interactable;
}

FText UMorInteractableState_Interact::GetEnabledText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

FText UMorInteractableState_Interact::GetDisabledText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}


