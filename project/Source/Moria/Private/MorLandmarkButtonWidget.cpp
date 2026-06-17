#include "MorLandmarkButtonWidget.h"

UMorLandmarkButtonWidget::UMorLandmarkButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
    this->DisplayNameLabel = NULL;
    this->RowNameLabel = NULL;
    this->bTooltipFromRowName = false;
    this->bSetSubduedLabelColorWhenUnselected = false;
}


bool UMorLandmarkButtonWidget::IsEmpty() const {
    return false;
}

void UMorLandmarkButtonWidget::HandleOnButtonClicked() {
}

FName UMorLandmarkButtonWidget::GetLandmarkRowName() const {
    return NAME_None;
}


