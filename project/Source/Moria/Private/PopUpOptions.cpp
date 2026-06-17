#include "PopUpOptions.h"

FPopUpOptions::FPopUpOptions() {
    this->VisibleTime = 0.00f;
    this->ContextWidget = NULL;
    this->bRemeberFocus = false;
    this->bExecuteClickEventBeforeHide = false;
    this->CloseKeyEventButtonIndex = 0;
}

