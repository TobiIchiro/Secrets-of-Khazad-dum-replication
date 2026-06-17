#include "MorMenuButtonsHintWidget.h"

UMorMenuButtonsHintWidget::UMorMenuButtonsHintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bAutoDeactivateInputAfterClick = true;
    this->HintButtonClass = NULL;
    this->SpacerClass = NULL;
    this->LeftHintContainer = NULL;
    this->CenterHintContainer = NULL;
    this->RightHintContainer = NULL;
    this->MenuButtons = NULL;
    this->DefaultHintTexture = NULL;
}

void UMorMenuButtonsHintWidget::UpdateAllHintButtons() {
}

void UMorMenuButtonsHintWidget::OnInputChanged(ECommonInputType InputType, FName ControllerName) {
}


void UMorMenuButtonsHintWidget::OnHintButtonClickedInternal(EMorButtonsTypes ButtonType) {
}

UMorHintButtonWidget* UMorMenuButtonsHintWidget::GetHintButtonFromType(EMorButtonsTypes ButtonType) {
    return NULL;
}

void UMorMenuButtonsHintWidget::ActivateButtonsInputHandling(bool bActivate) {
}


