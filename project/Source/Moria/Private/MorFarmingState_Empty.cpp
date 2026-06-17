#include "MorFarmingState_Empty.h"

UMorFarmingState_Empty::UMorFarmingState_Empty() {
    this->ParentInventory = NULL;
}

EInteractState UMorFarmingState_Empty::GetState_Implementation(const ACharacter* Interactor) const {
    return EInteractState::Interactable;
}

FText UMorFarmingState_Empty::GetEnabledText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}

FText UMorFarmingState_Empty::GetDisabledText_Implementation(const FText& TextFormat, const ACharacter* Interactor) const {
    return FText::GetEmpty();
}


