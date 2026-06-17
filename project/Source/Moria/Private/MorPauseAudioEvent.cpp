#include "MorPauseAudioEvent.h"

FMorPauseAudioEvent::FMorPauseAudioEvent() {
    this->ActivationState = EMorPauseActivationState::Inactive;
    this->Event = NULL;
}

