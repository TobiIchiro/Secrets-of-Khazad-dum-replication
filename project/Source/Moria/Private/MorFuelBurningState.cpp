#include "MorFuelBurningState.h"

UMorFuelBurningState::UMorFuelBurningState() {
    this->FuelBurningComponent = NULL;
}

EInteractState UMorFuelBurningState::GetState_Implementation(const ACharacter* Interactor) const {
    return EInteractState::Interactable;
}

FText UMorFuelBurningState::GetEnabledText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

FText UMorFuelBurningState::GetDisabledText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}


