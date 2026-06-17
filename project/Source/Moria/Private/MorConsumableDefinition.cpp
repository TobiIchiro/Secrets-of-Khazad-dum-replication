#include "MorConsumableDefinition.h"

FMorConsumableDefinition::FMorConsumableDefinition() {
    this->SpoilageSeconds = 0;
    this->HungerRestore = 0;
    this->HealthRestore = 0;
    this->EnergyRestore = 0;
    this->MealTime = EMealTime::None;
    this->ItemHotbarBehavior = EMorItemHotbarBehavior::None;
}

