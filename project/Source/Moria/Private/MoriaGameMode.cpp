#include "MoriaGameMode.h"

AMoriaGameMode::AMoriaGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStartingLoadout = NULL;
    this->PlayerRespawnLoadoutOverride = NULL;
    this->AltPlayerControllerClass = NULL;
    this->AltPlayerCharacterClass = NULL;
    this->LightingClass = NULL;
}


