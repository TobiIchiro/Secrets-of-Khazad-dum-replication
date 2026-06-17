#include "SVOQuerySettings.h"

FSVOQuerySettings::FSVOQuerySettings() {
    this->PathfindingAlgorithm = EPathfindingAlgorithm::AStar;
    this->bAllowPartialPaths = false;
    this->HeuristicScale = 0.00f;
    this->bUseUnitCost = false;
    this->bUseNodeCompensation = false;
    this->bUsePawnCentreForPathFollowing = false;
    this->bSmoothPath = false;
}

