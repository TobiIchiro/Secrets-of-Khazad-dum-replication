#include "ExpeditionManager.h"
#include "Net/UnrealNetwork.h"

AExpeditionManager::AExpeditionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentMapTable = NULL;
    this->NumberOfReadyPlayers = 0;
    this->bOverrideGenerateRescueExpedition = false;
    this->bOverrideGenerateGrendelExpedition = false;
    this->bOverrideGenerateForgeExpedition = false;
    this->RingForgeExpeditionSeed = 0;
    this->bAllowAllBiasModifiers = true;
    this->NumberOfExpeditionsToGenerate = 4;
    this->ExpeditionSelectionIndex = 0;
    this->ExpeditionState = EMorExpeditionState::InMainWorld;
}

void AExpeditionManager::SetExpeditionSelectionIndex(int32 NewIndex) {
}

void AExpeditionManager::SetExpeditionResourceBias(FMorExpeditionModifierDefinition OreDefinition) {
}

void AExpeditionManager::SetExpeditionEnemyBias(FMorExpeditionModifierDefinition EnemyBiasDefinition) {
}

void AExpeditionManager::RequestExpeditionBeginPreparing() {
}

void AExpeditionManager::RequestEndExpedition() {
}

void AExpeditionManager::RegenerateExpeditions() {
}

void AExpeditionManager::OnRep_RefreshExpeditionUI() {
}

void AExpeditionManager::OnRep_NumberOfPlayersChanged() {
}

bool AExpeditionManager::IsInExpedition(const UObject* WorldContextObject) {
    return false;
}

int32 AExpeditionManager::GetNumberOfSecondsForReady() {
    return 0;
}

int32 AExpeditionManager::GetNumberOfReadyPlayers() {
    return 0;
}

int32 AExpeditionManager::GetNumberOfRandomExpeditions() {
    return 0;
}

TArray<FMorExpeditionModifierDefinition> AExpeditionManager::GetExpeditionEnemyBiasOptions() {
    return TArray<FMorExpeditionModifierDefinition>();
}

TArray<FMorExpeditionModifierDefinition> AExpeditionManager::GetExpeditionBiasResources() {
    return TArray<FMorExpeditionModifierDefinition>();
}

EZoneSet AExpeditionManager::GetCurrentExpeditionZoneType() const {
    return EZoneSet::Moria;
}

void AExpeditionManager::CancelExpedition() {
}

void AExpeditionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExpeditionManager, CurrentMapTable);
    DOREPLIFETIME(AExpeditionManager, NumberOfReadyPlayers);
    DOREPLIFETIME(AExpeditionManager, GeneratedExpeditions);
    DOREPLIFETIME(AExpeditionManager, ExpeditionSelectionIndex);
    DOREPLIFETIME(AExpeditionManager, ExpeditionState);
    DOREPLIFETIME(AExpeditionManager, NpcsNeedingRescueInExpeditions);
}


