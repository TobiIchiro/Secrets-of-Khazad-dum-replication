#include "MorMediaPlayerManager.h"

UMorMediaPlayerManager::UMorMediaPlayerManager() {
    this->MediaPlayerHandlerClass = NULL;
    this->MediaPlayerHandler = NULL;
    this->MediaSave = NULL;
    this->AllMediaDataTable = NULL;
}

void UMorMediaPlayerManager::StopPlayingMedia() {
}

bool UMorMediaPlayerManager::PlayMediaByName(const FName& MediaName, UMorMediaPlayerWidget* MediaPlayerWidgetOverride, bool bForcePlay) {
    return false;
}

void UMorMediaPlayerManager::PlayMedia(const UMediaSource* MediaSource, const FMorMediaOptions& MediaOptions) {
}

UMorMediaPlayerWidget* UMorMediaPlayerManager::GetCurrentMediaPlayerWidget() const {
    return NULL;
}


