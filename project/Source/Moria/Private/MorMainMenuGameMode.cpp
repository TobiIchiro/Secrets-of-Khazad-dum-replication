#include "MorMainMenuGameMode.h"

AMorMainMenuGameMode::AMorMainMenuGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MigrationState = ESaveMigrationState::Uninitialized;
    this->DefaultMode = EMorMainMenuMode::HollinGate;
    this->PendingModeTransition = NULL;
    this->CancelledModeTransition = NULL;
    this->LoadingScreenClass = NULL;
}

bool AMorMainMenuGameMode::RequestModeChange(EMorMainMenuMode NewMode) {
    return false;
}

bool AMorMainMenuGameMode::IsMigrationComplete() {
    return false;
}

AMorMainMenuPlayerController* AMorMainMenuGameMode::GetPlayerController() const {
    return NULL;
}


