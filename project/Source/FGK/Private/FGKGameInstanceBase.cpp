#include "FGKGameInstanceBase.h"

UFGKGameInstanceBase::UFGKGameInstanceBase() {
    this->bStillStreaming = false;
    this->bLevelsStreaming = false;
    this->LevelMenu = NULL;
}

void UFGKGameInstanceBase::ToggleHelp_Implementation() {
}

void UFGKGameInstanceBase::RestartGameLevel_Implementation(const FName& LevelName) {
}

bool UFGKGameInstanceBase::LoadNextLevel(int32 NextWorldIdx, bool bSkipMovie, bool bSkipLoadingScreen) {
    return false;
}

bool UFGKGameInstanceBase::LoadLevel(FName RowName, bool bSkipMovie, bool bSkipLoadingScreen) {
    return false;
}

void UFGKGameInstanceBase::LoadGameLevel_Implementation(const FName& LevelName) {
}

void UFGKGameInstanceBase::GoToMainMenu_Implementation() {
}

FName UFGKGameInstanceBase::GetNextLevel(FName RowName, int32 NextIdx) const {
    return NAME_None;
}

FName UFGKGameInstanceBase::GetLevelPathName(FName RowName) const {
    return NAME_None;
}

UObject* UFGKGameInstanceBase::GetGlobalManagerInternal(const UClass* ManagerClass, bool bExactMatch) {
    return NULL;
}

void UFGKGameInstanceBase::FadeOutAndHideLoadingScreen_Implementation() {
}

void UFGKGameInstanceBase::FadeInAndShowLoadingScreen_Implementation() {
}


