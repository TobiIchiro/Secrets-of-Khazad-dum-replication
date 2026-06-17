#include "MorBreakablePropertiesDefinition.h"

FMorBreakablePropertiesDefinition::FMorBreakablePropertiesDefinition() {
    this->Health = 0;
    this->Team = EMoriaTeam::Dwarves;
    this->BreakableBehavior = EMorBreakableBehavior::Invalid;
    this->Tier = 0;
    this->bBigCharactersBreak = false;
    this->bIgnoreDestroyedStateInSaveFile = false;
}

