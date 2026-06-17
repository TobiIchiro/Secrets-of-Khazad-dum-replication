#include "MorWorldLayoutCustomConfiguration.h"

FMorWorldLayoutCustomConfiguration::FMorWorldLayoutCustomConfiguration() {
    this->WorldType = EMorWorldType::Default;
    this->bOverrideSeed = false;
    this->Seed = 0;
    this->DifficultyPreset = EMorDifficultyPreset::Story;
}

