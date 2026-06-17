#include "MorBlockedPlayersManager.h"
#include "MorCloudPlayerBlockList.h"
#include "MorPlayerPermissionList.h"

UMorBlockedPlayersManager::UMorBlockedPlayersManager() {
    this->GlobalBlockedPlayersListClass = UMorCloudPlayerBlockList::StaticClass();
    this->DedicatedServerBlockedPlayersListClass = UMorPlayerPermissionList::StaticClass();
    this->GameSessionManager = NULL;
    this->GlobalBlockedPlayers = NULL;
    this->FriendsBlockedPlayers = NULL;
    this->KickedPlayers = NULL;
    this->bIsBlockingEnabled = false;
    this->bCanKickPlayers = false;
    this->bCanUseFriendsBlockList = false;
}

void UMorBlockedPlayersManager::UnblockPlayer(const FMorPersistentPlayerIdentifier& PlayerIdentifier, EMorSaveBlockedPlayerResult& OutSavedResult) {
}

EMorSaveBlockedPlayerResult UMorBlockedPlayersManager::SetPermissions(const FMorPersistentPlayerIdentifier& PlayerIdentifier, bool bOverrideDefaults, const FMorPlayerPermissionSet& Permissions) {
    return EMorSaveBlockedPlayerResult::Updated;
}

EMorSaveBlockedPlayerResult UMorBlockedPlayersManager::SetDefaultPermissions(const FMorPlayerPermissionSet& Permissions) {
    return EMorSaveBlockedPlayerResult::Updated;
}

void UMorBlockedPlayersManager::KickPlayer(const FMorPersistentPlayerIdentifier& PlayerIdentifier, APlayerController* PlayerController, EMorRemovePlayerResult& OutRemoveResult, EMorSaveBlockedPlayerResult& OutSavedResult) {
}

bool UMorBlockedPlayersManager::IsPlayerBlocked(const FMorPersistentPlayerIdentifier& PlayerIdentifier) const {
    return false;
}

void UMorBlockedPlayersManager::HandleOnJoinGameStatusChanged(EPlayerJoinStatus JoinStatus, EPlayerJoinFailReason FailReason) {
}

void UMorBlockedPlayersManager::HandleOnHostGameStatusChanged(EPlayerHostStatus Status, EHostGameFailedReason Reason) {
}

FMorPlayerPermissionSet UMorBlockedPlayersManager::GetPlayerPermissions(const FMorPersistentPlayerIdentifier& PlayerIdentifier) const {
    return FMorPlayerPermissionSet{};
}

FMorPersistentPlayerIdentifier UMorBlockedPlayersManager::GetPlayerIdentifier(const FMorSharedPlayerData& SharedPlayerData) {
    return FMorPersistentPlayerIdentifier{};
}

APlayerController* UMorBlockedPlayersManager::GetPlayerController(const FMorSharedPlayerData& SharedPlayerData) {
    return NULL;
}

EMorPlayerBlockMode UMorBlockedPlayersManager::GetPlayerBlockMode(const FMorPersistentPlayerIdentifier& PlayerIdentifier) {
    return EMorPlayerBlockMode::Unsupported;
}

FName UMorBlockedPlayersManager::GetPlatform(const FMorPersistentPlayerIdentifier& PlayerIdentifier) {
    return NAME_None;
}

FMorPlayerPermissionSet UMorBlockedPlayersManager::GetDefaultPermissions() const {
    return FMorPlayerPermissionSet{};
}

UMorBlockedPlayersManager* UMorBlockedPlayersManager::Get(const UObject* WorldContext) {
    return NULL;
}

void UMorBlockedPlayersManager::BlockPlayer(const FMorPersistentPlayerIdentifier& PlayerIdentifier, APlayerController* OptionalPlayerController, EMorRemovePlayerResult& OutRemoveResult, EMorSaveBlockedPlayerResult& OutSavedResult) {
}


