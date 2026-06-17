#include "MorCharacterCustomizationRowWidget.h"

UMorCharacterCustomizationRowWidget::UMorCharacterCustomizationRowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Table = NULL;
    this->bIsCustomizationProperty = false;
    this->CustomizationPropertyType = ECharacterCustomizationPropertyType::Body;
    this->CharacterCreatorWidgetParent = NULL;
}

void UMorCharacterCustomizationRowWidget::SelectRowByOffset(int32 Offset) {
}

void UMorCharacterCustomizationRowWidget::SelectRow(const FName& RowName) {
}


