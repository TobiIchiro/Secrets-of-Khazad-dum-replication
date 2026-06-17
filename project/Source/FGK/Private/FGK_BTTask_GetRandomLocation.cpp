#include "FGK_BTTask_GetRandomLocation.h"

UFGK_BTTask_GetRandomLocation::UFGK_BTTask_GetRandomLocation() {
    this->NodeName = TEXT("Get Random Location");
    this->MaxDistance = 1000.00f;
    this->Filter = NULL;
}


