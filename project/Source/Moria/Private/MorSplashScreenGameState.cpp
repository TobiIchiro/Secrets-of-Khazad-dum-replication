#include "MorSplashScreenGameState.h"

AMorSplashScreenGameState::AMorSplashScreenGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplashScreenState = EMorSplashScreenState::None;
    this->bUseStreaming = false;
    this->bUseLoadingScreen = false;
    this->LoadingScreenClass = NULL;
    this->LoadedMainLevelPackage = NULL;
    this->LoadedWorldFromPackage = NULL;
    this->StreamingLevel = NULL;
}

void AMorSplashScreenGameState::PlaySplashVideo() {
}

void AMorSplashScreenGameState::OnStartupMoviesEnded() {
}

void AMorSplashScreenGameState::OnSplashVideoEnded() {
}

void AMorSplashScreenGameState::OnMainLevelStreamLoaded() {
}

void AMorSplashScreenGameState::HandlePlayerLoginStatusChange(EPlayerLoginStatus Status) {
}


