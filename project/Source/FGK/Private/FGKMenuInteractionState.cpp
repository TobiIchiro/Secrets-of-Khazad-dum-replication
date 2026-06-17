#include "FGKMenuInteractionState.h"

UFGKMenuInteractionState::UFGKMenuInteractionState() {
    this->MenuActionMappings.AddDefaulted(8);
}

UFGKSequencerState* UFGKMenuInteractionState::GetParentSequencerState() const {
    return NULL;
}

UFGKInteractableComponent* UFGKMenuInteractionState::GetInteractableComponent() const {
    return NULL;
}


