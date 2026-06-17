#include "MorCurrentPlayerListWidget.h"

UMorCurrentPlayerListWidget::UMorCurrentPlayerListWidget() {
    this->AutoNavigationOptions = 1;
    this->PlayerList = NULL;
    this->FirstPlayerListNavWidget = NULL;
    this->bEnabledList = false;
}

void UMorCurrentPlayerListWidget::UpdateWidgetNavigation_Implementation(UWidget* Widget, FMorWidgetNavigationBuilderHandle BuilderHandle) {
}



void UMorCurrentPlayerListWidget::SetListEnabled(bool bValue) {
}



TArray<UWidget*> UMorCurrentPlayerListWidget::GetWidgetInstances() const {
    return TArray<UWidget*>();
}

UWidget* UMorCurrentPlayerListWidget::GetFirstWidget() const {
    return NULL;
}



