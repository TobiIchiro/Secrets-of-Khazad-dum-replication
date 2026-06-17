#include "MorMediaPlayerHandler.h"

UMorMediaPlayerHandler::UMorMediaPlayerHandler() {
    this->MediaPlayer = NULL;
    this->MediaPlayerWidgetClass = NULL;
    this->MediaPlayerWidget = NULL;
    this->DefaultMediaWidgetZOrder = 0;
    this->AudioEvent = NULL;
    this->AudioComponent = NULL;
    this->SoundActor = NULL;
}

void UMorMediaPlayerHandler::OnSkipButtonPressed() {
}

void UMorMediaPlayerHandler::OnMediaEndReached() {
}


