#include "MorPlayerListManager.h"
#include "Net/UnrealNetwork.h"

AMorPlayerListManager::AMorPlayerListManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->DelayToDestroyRemovedPlayerController = 5.00f;
    this->BlockedPlayers = NULL;
}

FMorPersistentPlayerIdentifier AMorPlayerListManager::ToPlayerIdentifier(const FMorSharedPlayerData& PlayerData) {
    return FMorPersistentPlayerIdentifier{};
}

bool AMorPlayerListManager::IsLocalPlayerData(const FMorSharedPlayerData& PlayerData) {
    return false;
}

bool AMorPlayerListManager::IsLocalPlatform(const FMorSharedPlayerData& PlayerData, const UObject* WorldContext) {
    return false;
}

bool AMorPlayerListManager::IsHostPlayerData(const FMorSharedPlayerData& PlayerData) {
    return false;
}

void AMorPlayerListManager::HandleOnPlayerListReplicated() {
}

void AMorPlayerListManager::HandleOnMorPlayerPermissionChanged() {
}

void AMorPlayerListManager::HandleOnMorPlayerPawnChanged() {
}


int32 AMorPlayerListManager::GetPlayersNum() const {
    return 0;
}

TArray<FMorSharedPlayerData> AMorPlayerListManager::GetPlayers() const {
    return TArray<FMorSharedPlayerData>();
}

FMorSharedPlayerData AMorPlayerListManager::GetPlayerDataRef(int32 PlayerIndex) const {
    return FMorSharedPlayerData{};
}

FName AMorPlayerListManager::GetPlatform(const FMorSharedPlayerData& PlayerData) {
    return NAME_None;
}

FString AMorPlayerListManager::GetDwarfName(const FMorSharedPlayerData& PlayerData, const FString& Fallback) {
    return TEXT("");
}

AMorPlayerListManager* AMorPlayerListManager::Get(const UObject* WorldContext) {
    return NULL;
}

void AMorPlayerListManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorPlayerListManager, PlayerList);
}


