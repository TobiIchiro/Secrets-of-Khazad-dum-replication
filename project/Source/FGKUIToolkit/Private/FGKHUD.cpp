#include "FGKHUD.h"

UFGKHUD::UFGKHUD() {
    this->bDebugVisible = false;
}

void UFGKHUD::Show() {
}

void UFGKHUD::OnShow_Implementation() {
}


void UFGKHUD::OnHide_Implementation() {
}

bool UFGKHUD::IsShowing() const {
    return false;
}

void UFGKHUD::Hide() {
}

TArray<UUserWidget*> UFGKHUD::DebugGetHideableWidgets_Implementation() {
    return TArray<UUserWidget*>();
}


