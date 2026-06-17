#include "MorZoomieConfirmWidget.h"

UMorZoomieConfirmWidget::UMorZoomieConfirmWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ConfirmButton = NULL;
    this->CancelButton = NULL;
    this->CellPositionLabel = NULL;
    this->CellNameLabel = NULL;
    this->CellBubbleNameLabel = NULL;
    this->CellContentsLabel = NULL;
    this->CellZoneNameLabel = NULL;
    this->PlayerHintWidgetClass = NULL;
    this->PlayerHintWidget = NULL;
}

void UMorZoomieConfirmWidget::OnOpened_Implementation() {
}

void UMorZoomieConfirmWidget::OnConfirmed_Implementation() {
}

void UMorZoomieConfirmWidget::OnClosed_Implementation() {
}

void UMorZoomieConfirmWidget::OnCancelled_Implementation() {
}

void UMorZoomieConfirmWidget::HandleOnConfirmButtonClicked() {
}

void UMorZoomieConfirmWidget::HandleOnCancelButtonClicked() {
}


