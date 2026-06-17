#include "MorZoneChallengeDefinition.h"

FMorZoneChallengeDefinition::FMorZoneChallengeDefinition() {
    this->ChallengeFootprintDensityPercentage[0] = 0.00f;
    this->ChallengeFootprintDensityPercentage[1] = 0.00f;
    this->ChallengeFootprintDensityPercentage[2] = 0.00f;
    this->ChallengeFootprintDensityPercentage[3] = 0.00f;
    this->ChallengeFootprintDensityPercentage[4] = 0.00f;
    this->bIgnoreDensityOnFirstRepeat = false;
    this->TargetShadowCountPerCell = 0;
    this->TargetPoisonCountPerCell = 0;
}

