#include "MorCharacterFallStage.h"

FMorCharacterFallStage::FMorCharacterFallStage() {
    this->DurationEffect = NULL;
    this->LandingEffect = NULL;
    this->LandingEffectParameter = EMorCharacterFallEffectParameter::None;
    this->bInstantRespawn = false;
}

