#include "FGKAnimNotify_ActivateSpawners.h"

UFGKAnimNotify_ActivateSpawners::UFGKAnimNotify_ActivateSpawners() {
    this->MaxDistance = 5000.00f;
    this->MinNumPlayers = 0;
    this->DistanceType = EFGKDistanceType::HORIZ_ONLY;
    this->bIgnoreMySpawner = true;
}


