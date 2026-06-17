#include "FGKUIScreen.h"

UFGKUIScreen::UFGKUIScreen() {
    this->bDisableHide = false;
    this->bInvalidateOnShown = false;
    this->InvalidateOnShownDepth = 3;
    this->ActiveTab = NULL;
}

UUserWidget* UFGKUIScreen::ShowTabWithName(FName TabName) {
    return NULL;
}

void UFGKUIScreen::Show() {
}










bool UFGKUIScreen::IsShowing() const {
    return false;
}

void UFGKUIScreen::Hide() {
}

UWidgetSwitcher* UFGKUIScreen::GetWidgetSwitcher_Implementation() const {
    return NULL;
}

UUserWidget* UFGKUIScreen::GetTabWithName(FName TabName) const {
    return NULL;
}

FName UFGKUIScreen::GetActiveTabName() const {
    return NAME_None;
}

UUserWidget* UFGKUIScreen::GetActiveTab() const {
    return NULL;
}


