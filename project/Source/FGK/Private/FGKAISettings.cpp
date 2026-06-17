#include "FGKAISettings.h"

UFGKAISettings::UFGKAISettings() {
    this->DefaultNavQueryFilter = NULL;
    this->bUseMoveToUnstuckLogic = false;
    this->MoveTo_Stuck_DistanceThreshold = 1.00f;
    this->MoveTo_Stuck_TimeThreshold = 3.50f;
}


