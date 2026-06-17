#include "MorFloraReceptacleDefinition.h"

FMorFloraReceptacleDefinition::FMorFloraReceptacleDefinition() {
    this->MinCount = 0;
    this->MaxCount = 0;
    this->NumToGrowPerCycle = 0;
    this->RegrowthSleepCount = 0;
    this->TimeUntilGrowingStage = 0;
    this->TimeUntilReadyStage = 0;
    this->TimeUntilSpoiledStage = 0;
    this->MinVariableGrowthTime = 0;
    this->MaxVariableGrowthTime = 0;
    this->bPrefersInShade = false;
    this->MinimumFarmingLight = 0.00f;
    this->bCanSpoil = false;
    this->FloraType = EMorFarmingFloraType::None;
    this->GrowthRate = EMorFarmingFloraGrowthRate::None;
    this->IsPlantable = false;
    this->IsFungus = false;
    this->MinRandomScale = 0.00f;
    this->MaxRandomScale = 0.00f;
}

