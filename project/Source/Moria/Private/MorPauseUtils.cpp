#include "MorPauseUtils.h"

UMorPauseUtils::UMorPauseUtils() {
}

void UMorPauseUtils::SetGamePauseScopeActivated(EMorGamePauseScopeType ScopeType, FName ScopeName, FMorGamePauseScopeDescription Description, bool bActivate, const UObject* WorldContext) {
}

bool UMorPauseUtils::IsGamePauseDescriptionSet(const FMorGamePauseScopeDescription& Description) {
    return false;
}

bool UMorPauseUtils::IsGamePauseDescriptionEmpty(const FMorGamePauseScopeDescription& Description) {
    return false;
}

AMorPauseManager* UMorPauseUtils::GetGamePauseManager(const UObject* WorldContext) {
    return NULL;
}

bool UMorPauseUtils::DeactivateGamePauseScope(EMorGamePauseScopeType ScopeType, FName ScopeName, const UObject* WorldContext) {
    return false;
}

void UMorPauseUtils::ActivateGamePauseScope(EMorGamePauseScopeType ScopeType, FName ScopeName, FMorGamePauseScopeDescription Description, const UObject* WorldContext) {
}


