#include "MorSettingsComboBox.h"

UMorSettingsComboBox::UMorSettingsComboBox() {
    this->OptionComboBox = NULL;
    this->bUseIndexAsSelected = false;
}

void UMorSettingsComboBox::OnComboBoxSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}


