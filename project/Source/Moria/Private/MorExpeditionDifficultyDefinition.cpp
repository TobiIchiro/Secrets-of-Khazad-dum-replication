#include "MorExpeditionDifficultyDefinition.h"

FMorExpeditionDifficultyDefinition::FMorExpeditionDifficultyDefinition() {
    this->ResourceMultiplier = 0.00f;
    this->WeightedChanceToBeSelected = 0.00f;
    this->MinNumberOfZones = 0;
    this->MaxNumberOfZones = 0;
    this->MinAddNewResources = 0;
    this->MaxAddNewResources = 0;
    this->MinAddNewEnemies = 0;
    this->MaxAddNewEnemies = 0;
    this->MinAddAiPatrols = 0;
    this->MaxAddAiPatrols = 0;
    this->MinEnemyCountModifier = 0;
    this->MaxEnemyCountModifier = 0;
    this->MinNoiseModifier = 0;
    this->MaxNoiseModifier = 0;
}

