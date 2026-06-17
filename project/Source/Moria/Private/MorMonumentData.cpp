#include "MorMonumentData.h"

FMorMonumentData::FMorMonumentData() {
    this->MonumentType = EMonumentType::None;
    this->CurrentStage = 0;
    this->CurrentStageProgressionPoints = 0;
    this->bBuildItemsStoredForCurrentStage = false;
}

