#include "MorLandmarkSelectionWidget.h"

UMorLandmarkSelectionWidget::UMorLandmarkSelectionWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LandmarkButtonsParent = NULL;
    this->SearchText = NULL;
    this->ClearSelectionButton = NULL;
    this->CancelButton = NULL;
    this->FilterInfoLabel = NULL;
    this->LandmarkButtonClass = NULL;
}

void UMorLandmarkSelectionWidget::SetButtonWidgetSelected_Implementation(UMorLandmarkButtonWidget* Button, bool IsSelected) {
}

void UMorLandmarkSelectionWidget::HandleOnSearchTextChanged(const FText& Text) {
}

void UMorLandmarkSelectionWidget::HandleOnClearSelectionButtonClicked() {
}

void UMorLandmarkSelectionWidget::HandleOnCancelButtonClicked() {
}


