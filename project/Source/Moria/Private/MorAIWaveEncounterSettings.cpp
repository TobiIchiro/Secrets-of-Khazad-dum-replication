#include "MorAIWaveEncounterSettings.h"

UMorAIWaveEncounterSettings::UMorAIWaveEncounterSettings() {
    this->EncounterRadius = 8000.00f;
    this->bKeepMembersAware = false;
    this->bRequiresTarget = true;
    this->InBaseTeleportDistance = 8000.00f;
    this->bShouldSaveEncounter = true;
    this->bDrawWithReplacement = true;
    this->SpecialsStartWave = 2;
    this->ChanceOfSpecial = 0.50f;
    this->BaseWaveWeight = 50;
    this->WaveWeightMultipliers.AddDefaulted(9);
    this->TimeToFirstWave = 9.00f;
    this->TimeBetweenWaves = 4.00f;
    this->MinWaveSpawnTime = 8.00f;
    this->MaxWaveSpawnTime = 10.00f;
    this->WaveFinishWeight = 6;
    this->EncounterFinishWeight = 15;
    this->TotalWaveNumberPerPlayer.AddDefaulted(9);
    this->NumberOfWinningEncounterMembersToSaveToRoster = 0;
    this->DrumsClass = NULL;
    this->OnEncounterLoadedSFX = NULL;
    this->ShouldFirstEnemyToSpawnPlayAVoiceline = false;
    this->DialogueTable = NULL;
    this->SpawnQueryTemplate = NULL;
    this->bShouldLeashToNearbyLair = true;
    this->EndEncounterRadius = 4000.00f;
}


