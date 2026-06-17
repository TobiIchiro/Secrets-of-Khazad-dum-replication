#include "SleepManager.h"
#include "MorAISpawnerComponent.h"

ASleepManager::ASleepManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreSleepTimeRequirement = false;
    this->NightCount = 0;
    this->bMultipleSleepsPerNight = true;
    this->HardcodedNights = 0;
    this->EarliestRestTime = 18;
    this->LatestRestTime = 6;
    this->SleepHours = 8.00f;
    this->SleepCooldownInMinutes = 420.00f;
    this->EnemyDetectionRadius = 1000.00f;
    this->LastSleepTimeInGameMinutes = 4294966396;
    this->NightsToEarthquake.AddDefaulted(2);
    this->ElderNightsBetweenEarthquake = 28;
    this->GrendelSpawnerComponent = CreateDefaultSubobject<UMorAISpawnerComponent>(TEXT("GrendelSpawnerComponent"));
    this->GrendelSpawnQueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::RandomBest5Pct;
    this->StopKidnapNumberThreshold = 10;
    this->MaxKidnapPerEvent = 3;
    this->MaxNumNpcTeleportNearGrendel = 2;
    this->DaysToWaitUntilFallbackKidnap = 5;
    this->LastGrendelSpawnedGameTimeInMinutes = 0;
    this->TotalKidnappedNPC = 0;
    this->SpawnedGrendel = NULL;
    this->InvadingSettlementStone = NULL;
}

void ASleepManager::ServerCancelSleep_Implementation(AMorCharacter* Character) {
}

void ASleepManager::OnGrendelDestroyed(AActor* SpawnedActor) {
}



void ASleepManager::MulticastWakeUp_Implementation() {
}

void ASleepManager::MulticastShowFallbackGrendelNotif_Implementation(bool bIsFinalKidnap) {
}

void ASleepManager::MulticastOnPlayerGoToBed_Implementation(AMorCharacter* Player) {
}

void ASleepManager::MulticastLieDown_Implementation(const bool bInIsEarthquakePlanned) {
}

void ASleepManager::MulticastFadeOut_Implementation() {
}

void ASleepManager::MulticastFadeIn_Implementation() {
}

void ASleepManager::MulticastCannotActivateSleep_Implementation(AMorCharacter* Player, EUnableSleepState Reason) {
}

void ASleepManager::MulticastCancelSleep_Implementation(AMorCharacter* Character) {
}

int32 ASleepManager::GetTotalKidnappedNPC() const {
    return 0;
}


