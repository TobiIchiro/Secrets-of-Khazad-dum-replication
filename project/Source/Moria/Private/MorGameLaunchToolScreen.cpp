#include "MorGameLaunchToolScreen.h"

UMorGameLaunchToolScreen::UMorGameLaunchToolScreen() : UUserWidget(FObjectInitializer::Get()) {
    this->PresetComboBox = NULL;
    this->LevelSelectionComboBox = NULL;
    this->SeedText = NULL;
    this->GameTypeSingleplayerCheckbox = NULL;
    this->GameTypeMultiplayerCheckbox = NULL;
    this->InviteCodeLabel = NULL;
    this->InviteCodeText = NULL;
    this->ZoneFilterComboBox = NULL;
    this->StartLandmarkButton = NULL;
    this->StartingEquipmentComboBox = NULL;
    this->RespawnEquipmentOverrideComboBox = NULL;
    this->DiscoverySnapshotComboBox = NULL;
    this->StartGameButton = NULL;
    this->MainMenuButton = NULL;
    this->QuitButton = NULL;
    this->Handler = NULL;
}

void UMorGameLaunchToolScreen::StartSubWidgetTransition(UWidget* MainWidget, UWidget* TargetSubWidget, UWidgetAnimation* TransitionAnimation, UWidget* FocusWidget) {
}

void UMorGameLaunchToolScreen::StartFadeOutTransition_Implementation() {
}

void UMorGameLaunchToolScreen::RevertSubWidgetTransition() {
}



void UMorGameLaunchToolScreen::OnFinishedFadeOutTransition() {
}

void UMorGameLaunchToolScreen::HandleOnZoneFilterComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMorGameLaunchToolScreen::HandleOnSubWidgetTransitionAnimationFinished() {
}

void UMorGameLaunchToolScreen::HandleOnStartingEquipmentComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMorGameLaunchToolScreen::HandleOnStartGameButtonClicked() {
}

void UMorGameLaunchToolScreen::HandleOnSeedTextChanged(const FText& Text) {
}

void UMorGameLaunchToolScreen::HandleOnRespawnEquipmentOverrideComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMorGameLaunchToolScreen::HandleOnQuitButtonClicked() {
}

void UMorGameLaunchToolScreen::HandleOnPresetComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMorGameLaunchToolScreen::HandleOnMainMenuButtonClicked() {
}

void UMorGameLaunchToolScreen::HandleOnLevelSelectionComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UMorGameLaunchToolScreen::HandleOnInviteCodeTextChanged(const FText& Text) {
}

void UMorGameLaunchToolScreen::HandleOnGameTypeSingleplayerCheckboxChanged(bool bIsChecked) {
}

void UMorGameLaunchToolScreen::HandleOnGameTypeMultiplayerCheckboxChanged(bool bIsChecked) {
}

void UMorGameLaunchToolScreen::HandleOnDiscoverySnapshotComboBoxChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}



