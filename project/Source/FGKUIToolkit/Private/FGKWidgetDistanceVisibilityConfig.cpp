#include "FGKWidgetDistanceVisibilityConfig.h"

FFGKWidgetDistanceVisibilityConfig::FFGKWidgetDistanceVisibilityConfig() {
    this->MinFadeDistance = 0.00f;
    this->MaxFadeDistance = 0.00f;
    this->FadedInVisibility = ESlateVisibility::Visible;
    this->FadedOutVisibility = ESlateVisibility::Visible;
}

