#include "SongEffect.h"

FSongEffect::FSongEffect() {
    this->StartSeconds = 0.00f;
    this->bHasEndSeconds = false;
    this->EndSeconds = 0.00f;
    this->bUseSingingTime = false;
    this->bUseAllowedStates = false;
    this->bUseEvenIfSongAborted = false;
}

