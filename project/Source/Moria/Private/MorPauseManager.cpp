#include "MorPauseManager.h"
#include "MorPauseGuiHandler.h"

AMorPauseManager::AMorPauseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLocalManager = true;
    this->GuiHandler = CreateDefaultSubobject<UMorPauseGuiHandler>(TEXT("GuiHandler"));
    this->bMakeReadyInMultiplayerGame = false;
    this->bPauseWithTimeDilation = false;
    this->bUseEnginePause = true;
    this->bAudioSyncBlocksPause = false;
    this->PausedTimeDilation = 0.00f;
    this->DelayToUnpause = 0.10f;
    this->DefaultDelayBetweenPauses = 0.50f;
    this->AudioSyncDelayBetweenPauses = 2.00f;
    this->LevelSequenceScopeType = EMorGamePauseScopeType::AudioSync;
}

void AMorPauseManager::HandleOnPauseEventEnd(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

EMorPauseState AMorPauseManager::GetTargetPause() const {
    return EMorPauseState::Unavailable;
}

EMorPauseActivationState AMorPauseManager::GetPauseActivation() const {
    return EMorPauseActivationState::Inactive;
}

FText AMorPauseManager::GetCurrentStateDescription() const {
    return FText::GetEmpty();
}


