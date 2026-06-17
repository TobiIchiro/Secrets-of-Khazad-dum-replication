#include "FGKCameraInteractionState.h"

UFGKCameraInteractionState::UFGKCameraInteractionState() {
    this->InteractableComponent = NULL;
    this->bUsePlayerCamera = false;
}

UFGKSequencerState* UFGKCameraInteractionState::GetParentSequencerState() const {
    return NULL;
}

UFGKInteractableComponent* UFGKCameraInteractionState::GetInteractableComponent() const {
    return NULL;
}


