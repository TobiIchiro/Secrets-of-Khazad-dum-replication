#include "FGKUIScreenConfig.h"

FFGKUIScreenConfig::FFGKUIScreenConfig() {
    this->bTakesInputControl = false;
    this->bHideOpenScreens = false;
    this->bExecuteWhenPaused = false;
    this->HudBehavior = EFGKHudVisibility::NoHuds;
    this->bOpenToTab = false;
    this->UserAccess = EFGKScreenUserAccess::Everyone;
    this->ZOrderOffset = 0;
}

