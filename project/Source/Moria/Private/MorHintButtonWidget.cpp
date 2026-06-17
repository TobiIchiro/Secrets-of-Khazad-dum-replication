#include "MorHintButtonWidget.h"

UMorHintButtonWidget::UMorHintButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->HintImage = NULL;
    this->HintText = NULL;
    this->HintButton = NULL;
}


void UMorHintButtonWidget::OnHintButtonClickedInternal() {
}


