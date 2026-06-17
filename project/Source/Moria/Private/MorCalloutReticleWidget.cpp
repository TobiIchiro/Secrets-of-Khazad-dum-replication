#include "MorCalloutReticleWidget.h"

UMorCalloutReticleWidget::UMorCalloutReticleWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->CalloutTargetIcon = NULL;
    this->CalloutTargetName = NULL;
    this->CalloutTargetDistance = NULL;
}

void UMorCalloutReticleWidget::SetCalloutTargetText_Implementation(FText& Text, bool bFilterText) {
}

void UMorCalloutReticleWidget::SetCalloutTargetIcon_Implementation(UTexture2D* Icon) {
}

void UMorCalloutReticleWidget::SetCalloutTargetDistance_Implementation(FText& Text) {
}

void UMorCalloutReticleWidget::FadeIn_Implementation() {
}


