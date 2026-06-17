#include "MorLoadingScreenManager.h"

UMorLoadingScreenManager::UMorLoadingScreenManager() {
    this->LoadingScreenZOrder = 999;
    this->LoadingScreenMaxTime = 120.00f;
    this->GameSessionManager = NULL;
}

void UMorLoadingScreenManager::OnLoadingScreenStateChanged(UMorLoadingScreen* LoadingScreen, ELoadingScreenState NewScreenState) {
}

void UMorLoadingScreenManager::HandleOnSessionDestroyed() {
}


