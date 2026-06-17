#include "MorGameStartIntroScreen.h"

UMorGameStartIntroScreen::UMorGameStartIntroScreen() {
    this->PlayerController = NULL;
    this->MediaPlayer = NULL;
    this->LoadingBar = NULL;
    this->EarthquakeWidget = NULL;
    this->MainContent = NULL;
    this->JoiningPanel = NULL;
    this->WaitForWorldReadyToPlayTimeout = 30.00f;
    this->PlayVideoDelayFrames = 5;
    this->ShowVideoDelayFrames = 2;
}

void UMorGameStartIntroScreen::OnVideoEnded() {
}


