#include "VolumeSliderWidget.h"

UVolumeSliderWidget::UVolumeSliderWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->RTPC = NULL;
    this->ValueSlider = NULL;
}

void UVolumeSliderWidget::OnValueChanged(float Value) {
}


