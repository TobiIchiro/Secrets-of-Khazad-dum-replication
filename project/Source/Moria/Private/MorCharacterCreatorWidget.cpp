#include "MorCharacterCreatorWidget.h"

UMorCharacterCreatorWidget::UMorCharacterCreatorWidget() {
    this->CustomizationManager = NULL;
    this->CharacterRotationSpeed = 15.00f;
    this->CharacterUnrotationDelay = 1.00f;
}

void UMorCharacterCreatorWidget::UpdateGuiFromCustomizationManager() {
}

void UMorCharacterCreatorWidget::UnrotateCharacter(const float DeltaTime) {
}

bool UMorCharacterCreatorWidget::ShouldShowSecretMenu() {
    return false;
}

void UMorCharacterCreatorWidget::SetCustomizationManager(UCustomizationManager* InCustomizationManager) {
}

void UMorCharacterCreatorWidget::RotateCharacter(const float AxisInput) {
}


