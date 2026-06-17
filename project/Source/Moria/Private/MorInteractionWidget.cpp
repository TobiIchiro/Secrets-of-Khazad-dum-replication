#include "MorInteractionWidget.h"

UMorInteractionWidget::UMorInteractionWidget() {
    this->Interactor = NULL;
    this->InteractState = EInteractState::Unavailable;
    this->InteractComponent = NULL;
}

void UMorInteractionWidget::SetIsSelected(const bool bSelected) {
}






bool UMorInteractionWidget::OnMovePrevious_Implementation(bool bWrap) {
    return false;
}

bool UMorInteractionWidget::OnMoveNext_Implementation(bool bWrap) {
    return false;
}

bool UMorInteractionWidget::IsSelected() const {
    return false;
}

bool UMorInteractionWidget::HasHoldInteraction() const {
    return false;
}

void UMorInteractionWidget::ExecuteInteraction() {
}

void UMorInteractionWidget::ExecuteHoldInteraction() {
}

bool UMorInteractionWidget::CanDoInteraction() const {
    return false;
}

bool UMorInteractionWidget::CanDoHoldInteraction() const {
    return false;
}


