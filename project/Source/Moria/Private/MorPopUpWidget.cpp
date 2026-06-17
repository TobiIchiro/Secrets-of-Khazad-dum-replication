#include "MorPopUpWidget.h"

UMorPopUpWidget::UMorPopUpWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainText = NULL;
    this->BodyText = NULL;
    this->Context = NULL;
    this->CanUseBackKey = true;
}


void UMorPopUpWidget::NotifyPopupWidgetClosed() {
}

void UMorPopUpWidget::InitializePopUp(FPopUpOptions& PopUpOptions, const FOnPopUpButtonClicked& OnPopUpButonClicked) {
}

void UMorPopUpWidget::HidePopUp_Implementation() {
}


void UMorPopUpWidget::DeinitializePopUp() {
}



