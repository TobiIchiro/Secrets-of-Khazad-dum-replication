#include "MorPhysiqueValueWidget.h"

UMorPhysiqueValueWidget::UMorPhysiqueValueWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ValueSlider = NULL;
    this->DecreaseValueButton = NULL;
    this->IncreaseValueButton = NULL;
    this->DecreaseValueLabel = NULL;
    this->IncreaseValueLabel = NULL;
    this->bIsMeshMorph = false;
    this->MeshMorph = EMeshMorphs::Neck;
    this->ButtonValueStep = 0.10f;
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->ValueMultiplier = 1.00f;
    this->CharacterCreatorWidgetParent = NULL;
}

void UMorPhysiqueValueWidget::HandleOnValueSliderChanged(float NewValue) {
}

void UMorPhysiqueValueWidget::HandleOnIncreaseValueButtonClicked() {
}

void UMorPhysiqueValueWidget::HandleOnDecreaseValueButtonClicked() {
}


