#include "StatsManager.h"
#include "Net/UnrealNetwork.h"

AStatsManager::AStatsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AStatsManager::ReportEvent(FName EventName, AActor* Source, float Delta) {
}

float AStatsManager::GetValueForActor(FName EventName, AActor* Actor) {
    return 0.0f;
}

float AStatsManager::GetValue(FName EventName) {
    return 0.0f;
}

FName AStatsManager::GetNameWasRevived() const {
    return NAME_None;
}

FName AStatsManager::GetNameVulnerableAttacks() const {
    return NAME_None;
}

FName AStatsManager::GetNameRopesPlaced() const {
    return NAME_None;
}

FName AStatsManager::GetNameRopesClimbed() const {
    return NAME_None;
}

FName AStatsManager::GetNameRevivedOther() const {
    return NAME_None;
}

FName AStatsManager::GetNameRespawns() const {
    return NAME_None;
}

FName AStatsManager::GetNamePerfectBlocks() const {
    return NAME_None;
}

FName AStatsManager::GetNameEnemiesDefeated() const {
    return NAME_None;
}

FName AStatsManager::GetNameDwarvesIncapacitated() const {
    return NAME_None;
}

FName AStatsManager::GetNameDamageSelf() const {
    return NAME_None;
}

FName AStatsManager::GetNameDamageReceived() const {
    return NAME_None;
}

FName AStatsManager::GetNameDamageDealt() const {
    return NAME_None;
}

void AStatsManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStatsManager, Data);
    DOREPLIFETIME(AStatsManager, ActorData);
}


