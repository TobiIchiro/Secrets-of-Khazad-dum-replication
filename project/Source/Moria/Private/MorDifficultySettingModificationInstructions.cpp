#include "MorDifficultySettingModificationInstructions.h"

FMorDifficultySettingModificationInstructions::FMorDifficultySettingModificationInstructions() {
    this->SettingType = EMorDifficultySettingType::DwarfAttribute;
    this->CombatGridToOverride = EMorDifficultyCombatGridType::Attack;
    this->CombatGridPropertyToOveride = EMorDifficultyCombatGridProperty::GridCapacity;
}

