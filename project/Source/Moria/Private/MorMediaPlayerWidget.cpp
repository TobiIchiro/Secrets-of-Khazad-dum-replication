#include "MorMediaPlayerWidget.h"

UMorMediaPlayerWidget::UMorMediaPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FadeOffSkipTextTime = 0.00f;
    this->bIsSkippable = true;
}

void UMorMediaPlayerWidget::SetEnableInput(bool bEnable) {
}








bool UMorMediaPlayerWidget::GetIsMediaPlaying() {
    return false;
}



