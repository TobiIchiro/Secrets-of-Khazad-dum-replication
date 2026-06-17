#include "MorColorSelectionWidget.h"

UMorColorSelectionWidget::UMorColorSelectionWidget() {
    this->MaxColumns = 8;
    this->ColorOptions = NULL;
    this->ColorSelectionRowButtonClass = NULL;
    this->ColorBox = NULL;
}

UButton* UMorColorSelectionWidget::GetFirstColorSelectionButton() const {
    return NULL;
}



