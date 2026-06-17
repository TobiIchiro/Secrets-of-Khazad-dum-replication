#include "MorPopUpButtonWidget.h"

UMorPopUpButtonWidget::UMorPopUpButtonWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ButtonText = NULL;
    this->PopUpButton = NULL;
    this->ButtonIndex = 0;
}

void UMorPopUpButtonWidget::SetButtonText(const FText& ButtonNewText) {
}

void UMorPopUpButtonWidget::OnPopUpButtonClickedEvent() {
}


