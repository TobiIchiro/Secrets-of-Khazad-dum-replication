#include "MorAISpawnManager.h"

AMorAISpawnManager::AMorAISpawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpawnLimit = 80.00f;
    this->ValidationCheckInterval = 10.00f;
    this->SpawnAttemptCooldownTime = 3.00f;
    this->SpawnAttemptsToTry = 4;
}

void AMorAISpawnManager::OnCharacterDestroyed(AActor* DestroyedActor) {
}

void AMorAISpawnManager::OnCharacterDespawnFinished(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AMorAISpawnManager::BP_RequestSpawn(TSoftClassPtr<AMorCharacter> InCharacterType, FTransform InSpawnTransform, UObject* InSpawner, EMorAISpawnContext InSpawnContext) {
}


