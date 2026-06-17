#include "MorMenuManager.h"

UMorMenuManager::UMorMenuManager() {
    this->StartGameLoadingScreenClass = NULL;
    this->LeaveGameLoadingScreenClass = NULL;
    this->CharacterSaveSlotManager = NULL;
    this->WorldSelectionManager = NULL;
    this->PopUpClass = NULL;
    this->MenuButtons = NULL;
}

bool UMorMenuManager::StartSinglePlayerGame() {
    return false;
}

EMorSystemMessageBoxResult UMorMenuManager::ShowSystemMessageBox(EMorSystemMessageBoxType Type, const FText& Message, const FText& Caption) {
    return EMorSystemMessageBoxResult::No;
}

void UMorMenuManager::SetProgressActivity(bool bEnabled) {
}

void UMorMenuManager::ResetLastGoToMainMenuReason() {
}

void UMorMenuManager::OnWorldsListUpdated(const TArray<UMorWorldSelectItem*>& Worlds) {
}

void UMorMenuManager::LaunchMultiplayerGame() {
}

bool UMorMenuManager::IsSandboxWorldMapName(const FString& WorldMapName) const {
    return false;
}

bool UMorMenuManager::HostMultiplayerGame() {
    return false;
}

EMorWorldType UMorMenuManager::GetWorldTypeByName(const FString& WorldMapName) const {
    return EMorWorldType::Default;
}

FString UMorMenuManager::GetSandboxWorldMapName() const {
    return TEXT("");
}

EMorGoToMainMenuReason UMorMenuManager::GetLastGoToMainMenuReason() const {
    return EMorGoToMainMenuReason::None;
}

UMorMenuManager* UMorMenuManager::Get(const UObject* WorldContext) {
    return NULL;
}


