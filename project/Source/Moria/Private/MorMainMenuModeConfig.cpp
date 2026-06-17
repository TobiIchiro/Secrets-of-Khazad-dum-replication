#include "MorMainMenuModeConfig.h"

FMorMainMenuModeConfig::FMorMainMenuModeConfig() {
    this->Mode = EMorMainMenuMode::None;
    this->DefaultPawnClass = NULL;
    this->PlayerControlerImplementationClass = NULL;
    this->TransitionClass = NULL;
}

