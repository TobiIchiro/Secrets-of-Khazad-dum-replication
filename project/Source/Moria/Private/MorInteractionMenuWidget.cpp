#include "MorInteractionMenuWidget.h"

UMorInteractionMenuWidget::UMorInteractionMenuWidget() {
    this->Interactor = NULL;
    this->DefaultInteractionWidgetClass = NULL;
    this->bHideIfNoInteractions = false;
    this->InteractComponent = NULL;
}

void UMorInteractionMenuWidget::ParentShown() {
}

void UMorInteractionMenuWidget::ParentHidden() {
}




void UMorInteractionMenuWidget::MovePrevious(bool bWrap) {
}

void UMorInteractionMenuWidget::MoveNext(bool bWrap) {
}

UPanelWidget* UMorInteractionMenuWidget::GetInteractionWidgetsContainer_Implementation() {
    return NULL;
}

UMorInteractionWidget* UMorInteractionMenuWidget::GetCurrentInteractionWidget() const {
    return NULL;
}


