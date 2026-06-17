#include "MorLeaveGameParams.h"

FMorLeaveGameParams::FMorLeaveGameParams() {
    this->GoToMenuReason = EMorGoToMainMenuReason::None;
    this->State = EPlayerControllerLeaveGameState::Initiate;
    this->bReturnToMenu = false;
    this->bIsDedicatedServer = false;
}

