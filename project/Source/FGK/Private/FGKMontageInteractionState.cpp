#include "FGKMontageInteractionState.h"

UFGKMontageInteractionState::UFGKMontageInteractionState() {
    this->bStopAllOtherMontages = false;
    this->AnimMontage = NULL;
    this->FaceMontage = NULL;
    this->bEndSequencerOnMontageFinish = true;
}

UFGKSequencerState* UFGKMontageInteractionState::GetParentSequencerState() const {
    return NULL;
}

UFGKInteractableComponent* UFGKMontageInteractionState::GetInteractableComponent() const {
    return NULL;
}


