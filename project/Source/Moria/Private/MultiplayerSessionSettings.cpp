#include "MultiplayerSessionSettings.h"

FMultiplayerSessionSettings::FMultiplayerSessionSettings() {
    this->PlayerCount = 0;
    this->MaxPlayerCount = 0;
    this->SessionMode = EMorMultiplayerSessionMode::PlatformLocked;
    this->GameReadyToJoin = false;
    this->Seed = 0;
    this->bRequiresPassword = false;
    this->WorldType = EMorWorldType::Default;
    this->bDedicatedServer = false;
}

