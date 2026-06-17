#include "FGKAnimNotify_EnableSpawners.h"

UFGKAnimNotify_EnableSpawners::UFGKAnimNotify_EnableSpawners() {
    this->bEnable = true;
    this->MaxDistance = 5000.00f;
    this->DistanceType = EFGKDistanceType::HORIZ_ONLY;
}


