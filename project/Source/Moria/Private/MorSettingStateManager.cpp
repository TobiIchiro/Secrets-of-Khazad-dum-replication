#include "MorSettingStateManager.h"

UMorSettingStateManager::UMorSettingStateManager() {
}

bool UMorSettingStateManager::IsLimitedMultiplayerSessionModePlatform(const UObject* WorldContext) {
    return false;
}

EMorSubtitleOptions UMorSettingStateManager::GetSubtitleMode() const {
    return EMorSubtitleOptions::OFF;
}

int32 UMorSettingStateManager::GetSubtitleFontSize() const {
    return 0;
}

EMorMultiplayerNamesMode UMorSettingStateManager::GetPlayersNameMode() const {
    return EMorMultiplayerNamesMode::BasicNames;
}

EMorMultiplayerSessionMode UMorSettingStateManager::GetMultiplayerSessionMode() const {
    return EMorMultiplayerSessionMode::PlatformLocked;
}

EMorMultiplayerNamesMode UMorSettingStateManager::GetEditableNameMode() const {
    return EMorMultiplayerNamesMode::BasicNames;
}

UMorSettingStateManager* UMorSettingStateManager::Get(const UObject* WorldContext) {
    return NULL;
}

bool UMorSettingStateManager::CanUserChangeMultiplayerSessionMode(const UObject* WorldContext) {
    return false;
}

bool UMorSettingStateManager::CanUserChangeMultiplayerNamesMode(const UObject* WorldContext) {
    return false;
}

bool UMorSettingStateManager::CanAccessUserGeneratedContent() const {
    return false;
}

bool UMorSettingStateManager::AreSubtitlesKhuzdulOnly() const {
    return false;
}

bool UMorSettingStateManager::AreSubtitlesEnabled() const {
    return false;
}


