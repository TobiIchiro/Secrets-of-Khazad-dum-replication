#include "MorExpeditionModifierDefinition.h"

FMorExpeditionModifierDefinition::FMorExpeditionModifierDefinition() {
    this->ModifierType = EMorExpeditionModifierType::NONE;
    this->EnemyMultiplier = 0.00f;
    this->NoiseGenerationModifier = 0.00f;
    this->DifficultyScore = 0.00f;
    this->UiSection = EMorModifierUISection::NONE;
}

