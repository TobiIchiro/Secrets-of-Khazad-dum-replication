#include "POIWidget.h"

UPOIWidget::UPOIWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->POIImage = NULL;
    this->PlayerName = NULL;
    this->POIDistance = NULL;
    this->POIDepth = NULL;
    this->POIText = NULL;
    this->bShow = false;
    this->bShowDepth = false;
    this->bShowingDepthDelta = false;
    this->bShowDistance = false;
    this->bShowDescription = false;
    this->bShowName = false;
    this->bCanOverrideIconWithName = true;
    this->Distance = 0.00f;
    this->Depth = 0.00f;
    this->IconTexture = NULL;
    this->bIsPlayer = false;
}

void UPOIWidget::SetTintColor_Implementation(const FSlateColor& InColor) {
}

void UPOIWidget::SetShowPlayerName_Implementation(bool bInShowName, bool bInCanOverrideIconWithName) {
}

void UPOIWidget::SetShouldUseDepth(bool InUsingDepth) {
}

void UPOIWidget::SetShouldShow_Implementation(bool bInShouldShow) {
}

void UPOIWidget::SetPlayerName_Implementation(const FString& InPlayerName, const FString& InCharacterName, bool bInIsPlayer) {
}

void UPOIWidget::SetIcon_Implementation(UTexture2D* InIcon) {
}

void UPOIWidget::SetDistance_Implementation(bool bInShowDistance, float InDistance) {
}

void UPOIWidget::SetDescriptionText_Implementation(bool bInShowText, const FText& InText) {
}

void UPOIWidget::SetDepth_Implementation(bool bInShowDepth, float InDepth) {
}


