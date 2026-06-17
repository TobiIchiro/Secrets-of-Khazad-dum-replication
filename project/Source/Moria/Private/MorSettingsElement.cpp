#include "MorSettingsElement.h"

UMorSettingsElement::UMorSettingsElement() : UUserWidget(FObjectInitializer::Get()) {
    this->OptionNameTextBlock = NULL;
    this->DataHandlerClass = NULL;
    this->DataHandler = NULL;
    this->bInvalidElement = false;
    this->bElementEnable = true;
    this->OptionHandler = NULL;
}

void UMorSettingsElement::ShowElement() {
}

void UMorSettingsElement::SetOptionToDefault() {
}

void UMorSettingsElement::SetElementEnable(bool bEnable) {
}

void UMorSettingsElement::OnWidgetRebuilt() {
}

bool UMorSettingsElement::IsInvalid() const {
    return false;
}

void UMorSettingsElement::InvalidateElement(bool bInvalid) {
}

void UMorSettingsElement::HideElement() {
}

void UMorSettingsElement::ForceReinit() {
}

void UMorSettingsElement::ElementChanged() {
}

void UMorSettingsElement::ChangeIntValue(int32 Value) {
}






