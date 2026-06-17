#include "MorBlockedPlayersList.h"

UMorBlockedPlayersList::UMorBlockedPlayersList() {
    this->CurrentState = EMorBlockedPlayersListState::Inactive;
    this->bLastSaveSucceeded = true;
}

EMorSaveBlockedPlayerResult UMorBlockedPlayersList::SetPlayerPermission(const FMorBlockedPlayersListItem& Item, bool bOverridePermission, const FMorPlayerPermissionSet& Permission) {
    return EMorSaveBlockedPlayerResult::Updated;
}

EMorSaveBlockedPlayerResult UMorBlockedPlayersList::SetPlayerBlocked(const FMorBlockedPlayersListItem& Item, bool bBlocked) {
    return EMorSaveBlockedPlayerResult::Updated;
}

EMorSaveBlockedPlayerResult UMorBlockedPlayersList::SetDefaultPermissions(const FMorPlayerPermissionSet& Permissions) {
    return EMorSaveBlockedPlayerResult::Updated;
}

void UMorBlockedPlayersList::Prepare() {
}

bool UMorBlockedPlayersList::IsSaving() const {
    return false;
}

bool UMorBlockedPlayersList::IsPrepared() const {
    return false;
}

bool UMorBlockedPlayersList::IsLoading() const {
    return false;
}

bool UMorBlockedPlayersList::IsInactive() const {
    return false;
}

int32 UMorBlockedPlayersList::GetPlayerNum() const {
    return 0;
}

FMorPlayerPermissionStorageData UMorBlockedPlayersList::GetPlayerDataFromItem(const FMorBlockedPlayersListItem& Item, bool& bOutIsValid) {
    return FMorPlayerPermissionStorageData{};
}

FMorPlayerPermissionStorageData UMorBlockedPlayersList::GetPlayerData(int32 ItemIndex) const {
    return FMorPlayerPermissionStorageData{};
}

EMorPlayerBlockMode UMorBlockedPlayersList::GetPlayerBlockMode(const FMorPersistentPlayerIdentifier& PlayerIdentifier) const {
    return EMorPlayerBlockMode::Unsupported;
}

FMorBlockedPlayersListItem UMorBlockedPlayersList::GetPlayer(int32 ItemIndex) const {
    return FMorBlockedPlayersListItem{};
}

int32 UMorBlockedPlayersList::GetCapacity() const {
    return 0;
}


