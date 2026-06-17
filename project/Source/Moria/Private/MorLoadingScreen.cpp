#include "MorLoadingScreen.h"

UMorLoadingScreen::UMorLoadingScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->LoadingPanel = NULL;
    this->Open = NULL;
    this->Close = NULL;
    this->VolumeAkRtpc = NULL;
    this->OpenedVolume = 0.00f;
    this->ClosedVolume = 1.00f;
    this->VolumeTransitionTime = 1.00f;
}

bool UMorLoadingScreen::UseVideo() const {
    return false;
}

bool UMorLoadingScreen::IsJoiningClient() const {
    return false;
}

bool UMorLoadingScreen::IsEarthquakePlanned() const {
    return false;
}

void UMorLoadingScreen::CloseLoadingScreen(bool bInstant) {
}



