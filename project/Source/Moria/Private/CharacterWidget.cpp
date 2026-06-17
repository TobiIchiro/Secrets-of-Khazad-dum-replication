#include "CharacterWidget.h"

UCharacterWidget::UCharacterWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NameText = NULL;
    this->HealthBar = NULL;
    this->StaminaBar = NULL;
    this->StaminaText = NULL;
    this->DebugText = NULL;
    this->CraftingPanel = NULL;
    this->CraftingText = NULL;
    this->CraftingBar = NULL;
    this->SingingPanel = NULL;
    this->VoiceLinePanel = NULL;
    this->SongPrimePanel = NULL;
    this->SongPrimeBar = NULL;
}

bool UCharacterWidget::IsDebugView() {
    return false;
}

void UCharacterWidget::HandleOnPlayersNameModeChanged(EMorMultiplayerNamesMode NewMode) {
}

float UCharacterWidget::GetStaminaPerPip() const {
    return 0.0f;
}

float UCharacterWidget::GetStaminaMaxPipCount() const {
    return 0.0f;
}


