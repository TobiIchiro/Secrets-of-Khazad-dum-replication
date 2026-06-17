#include "MorDifficultySettingsManager.h"
#include "Net/UnrealNetwork.h"

AMorDifficultySettingsManager::AMorDifficultySettingsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentPreset = EMorDifficultyPreset::NormalDefault;
    this->PendingPreset = EMorDifficultyPreset::Custom;
    this->OnScreenMessageLength = 10.00f;
}

void AMorDifficultySettingsManager::OnSliderUpdated(FMorDifficultySliderRowHandle SliderRowHandle, int32 NewSliderLocation) {
}

void AMorDifficultySettingsManager::OnDifficultyPresetSelected(EMorDifficultyPreset SelectedDifficultyPreset) {
}

void AMorDifficultySettingsManager::InitializeToPreset(EMorDifficultyPreset InitialPreset) {
}

bool AMorDifficultySettingsManager::HasPendingChanges() const {
    return false;
}

TArray<FMorSavedSliderLocation> AMorDifficultySettingsManager::GetSliders() const {
    return TArray<FMorSavedSliderLocation>();
}

EMorDifficultyPreset AMorDifficultySettingsManager::GetCurrentPreset() const {
    return EMorDifficultyPreset::Story;
}

void AMorDifficultySettingsManager::ConfirmDifficultyChanges() {
}

void AMorDifficultySettingsManager::CancelDifficultyChanges() {
}

void AMorDifficultySettingsManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorDifficultySettingsManager, SavedDifficultySettings);
    DOREPLIFETIME(AMorDifficultySettingsManager, SavedSliderLocations);
    DOREPLIFETIME(AMorDifficultySettingsManager, CurrentPreset);
}


