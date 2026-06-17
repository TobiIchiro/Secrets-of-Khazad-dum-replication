#include "MorChallengeDefinition.h"

FMorChallengeDefinition::FMorChallengeDefinition() {
    this->Footprint = EChallengeFootprint::Tiny;
    this->bTypesMustBeExact = false;
    this->Difficulty = EMDifficulty::None;
    this->BubbleDeco = NULL;
    this->NeighbouringBubbleDeco = NULL;
    this->RespawnChancePerSleep = 0.00f;
    this->bCompletable = false;
    this->bPermanent = false;
    this->bInitialWorldGenOnly = false;
    this->bAllowInBase = false;
    this->ReshuffleChancePerEarthquakePercent = 0.00f;
    this->bUseShadowAffinity = false;
    this->bUsePoisonAffinity = false;
}

