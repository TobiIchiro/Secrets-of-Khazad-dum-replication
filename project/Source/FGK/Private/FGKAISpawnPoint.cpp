#include "FGKAISpawnPoint.h"
#include "Components/SphereComponent.h"
#include "Templates/SubclassOf.h"

AFGKAISpawnPoint::AFGKAISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->AIClass = NULL;
    this->bUseTags = true;
    this->bOverrideTeam = true;
    this->bOverrideBehavior = true;
    this->bOverrideAttackSettings = true;
    this->bOverrideLoadout = true;
    this->bOverrideHealth = true;
    this->bOverrideDisplayName = false;
    this->TeamID = -1;
    this->BehaviorFSMClass = NULL;
    this->AttackSettings = NULL;
    this->Loadout = NULL;
    this->MaxHealth = -1.00f;
    this->DefaultLandMovementMode = MOVE_MAX;
    this->bEnabled = true;
    this->bSpawnAtStart = true;
    this->bSpawnAtPlayerConnected = false;
    this->bSpawnWhenPlayerEntersTrigger = false;
    this->bProjectToNavMesh = false;
    this->bDespawnAfterDeath = false;
    this->bKillWhenPlayerExitsTrigger = false;
    this->bDestroyWhenPlayerExitsTrigger = true;
    this->bRespawnAfterDeath = true;
    this->bAutoKill = false;
    this->bCanTakeDamageDuringSpawning = false;
    this->bCanFinishSpawning = true;
    this->bDealContinuousDamageDuringSpawning = false;
    this->SpawnDelayTime = -1.00f;
    this->MaxNumSpawns = -1;
    this->MaxNumActive = 1;
    this->MinNumPlayers = 0;
    this->AutoKillTime = 1.00f;
    this->DespawnTime = 5.00f;
    this->RespawnTime = 3.00f;
    this->SpawningTrigger = NULL;
    this->SpawningMontage = NULL;
    this->ContinuousDamageSettings = NULL;
    this->PendingSpawnedCharacter = NULL;
    this->NumCharactersSpawned = 0;
    this->DistanceTriggerComponent = CreateDefaultSubobject<USphereComponent>(TEXT("DistanceTrigger"));
    this->ContinuousDamageComponent = NULL;
    this->bCanResumeSpawning = true;
    this->DistanceTriggerComponent->SetupAttachment(RootComponent);
}

void AFGKAISpawnPoint::SpawnToNum(const TArray<AFGKAISpawnPoint*>& InSpawners, int32 NumToSpawn, bool bActivateEachSpawnerOnce) {
}

AFGKBaseCharacter* AFGKAISpawnPoint::SpawnAI() {
    return NULL;
}

void AFGKAISpawnPoint::QuickSpawnAI() {
}

void AFGKAISpawnPoint::OnPlayerExitSpawningTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFGKAISpawnPoint::OnPlayerEntersSpawningTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFGKAISpawnPoint::OnCharacterDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void AFGKAISpawnPoint::OnActivePlayerNumberChanged(int32 Delta) {
}

void AFGKAISpawnPoint::KillAll() {
}

void AFGKAISpawnPoint::FinishSpawningAI(AFGKBaseCharacter* Character) {
}

bool AFGKAISpawnPoint::FindAllSpawners(UObject* WorldContext, TArray<AFGKAISpawnPoint*>& OutSpawners, const FVector& FromLocation, float Distance, EFGKDistanceType DistanceType, FName ActorTag) {
    return false;
}


