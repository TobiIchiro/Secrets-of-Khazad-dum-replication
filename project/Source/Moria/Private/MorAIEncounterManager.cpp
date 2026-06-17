#include "MorAIEncounterManager.h"

AMorAIEncounterManager::AMorAIEncounterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AwarenessEventScalars.AddDefaulted(9);
    this->NightTimeAwarenessEventModifier = 0.00f;
    this->SingingMiningBaseMultiplier = 0.00f;
    this->SingingTavernBaseMultiplier = 0.00f;
    this->SingingVenerationBaseMultiplier = 0.00f;
    this->HordeRollingAwarenessInterval = 2.00f;
    this->bUseAwarenessThreshold = true;
    this->HordeRollingAwarenessThreshold = 100.00f;
    this->AwarenessLevelToHordeChance = NULL;
    this->AwarenessLevelToHordeChance_IgnoreThreshold = NULL;
    this->AwarenessResetAmountAfterFailedHorde = 50.00f;
    this->PostHordeAwarenessCooldown = 10.00f;
    this->bClearAwarenessOnSleep = true;
    this->AmountOfAwarenessClearedOnSleep = 1000.00f;
    this->bAwarenessDecays = false;
    this->AwarenessDecayInterval = 1.00f;
    this->AwarenessDecayAmount = 0.25f;
    this->AwarenessDecayDelay = 20.00f;
    this->bHasAHordeTriggered = false;
    this->HordeTimeLimit = 5.00f;
    this->HordeFallbackSettings = NULL;
    this->CurrentHorde = NULL;
    this->MinTimeBetweenHarrassment = 5.00f;
    this->MaxTimeBetweenHarrassment = 15.00f;
    this->HarassmentFallbackSettings = NULL;
    this->SiegeTriggerDistance = 5000.00f;
    this->SiegeTimeLimit = 6.00f;
    this->SiegeCooldown = 15.00f;
    this->AwarenessAmountToSubtractWhenSiegeEnds = 100.00f;
    this->NumberOfFailedSiegeRollsToSubtractWhenHordeEnds = 10;
    this->SiegeFallbackSettings = NULL;
    this->SiegeWaypointZOffset = 100.00f;
    this->CurrentSiege = NULL;
    this->ActiveBossComponent = NULL;
    this->ShowBossHealthBarCheckFrequency = 3.00f;
    this->SummoningLimit = 3;
}

void AMorAIEncounterManager::SummonedEncounterDestroyed(AActor* DestroyedSummonedEncounter) {
}

AMorAIWaveEncounter* AMorAIEncounterManager::SpawnEncounter(AMorCharacter* EncounterTarget, UMorAIWaveEncounterSettings* EncounterSettings, bool bIsHorde) {
    return NULL;
}

void AMorAIEncounterManager::ReportAwarenessEvent(EMorAIHordeAwarenessEventType EventType, AMorCharacter* EventTriggerer) {
}

void AMorAIEncounterManager::OnSiegeEnded(AMorAIWaveEncounter* FinishedEncounter) {
}

void AMorAIEncounterManager::OnSiegeDestroyed(AActor* DestroyedSiege) {
}

void AMorAIEncounterManager::OnHordeFinished(AMorAIWaveEncounter* FinishedEncounter) {
}

void AMorAIEncounterManager::OnHordeDestroyed(AActor* DestroyedHorde) {
}

void AMorAIEncounterManager::MulticastReportHorde_Implementation(const AMorCharacter* TriggeringCharacter) {
}

UMorAIBossComponent* AMorAIEncounterManager::GetBossComponent(bool& Success) {
    return NULL;
}

void AMorAIEncounterManager::ClearAwarenessLevelForZoneWithOrcTownProgressRow(const UObject* WorldContextObject, FMorProgressRowHandle ProgressRow) {
}


