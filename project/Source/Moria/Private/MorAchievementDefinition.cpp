#include "MorAchievementDefinition.h"

FMorAchievementDefinition::FMorAchievementDefinition() {
    this->AchievementType = EMorAchievementType::EnterArea;
    this->AchievementTriggerBehavior = EMorAchievementTriggerBehavior::System;
    this->TimeToDelay = 0.00f;
    this->Amount = 0;
}

