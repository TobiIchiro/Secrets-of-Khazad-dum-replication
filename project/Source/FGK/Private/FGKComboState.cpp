#include "FGKComboState.h"

UFGKComboState::UFGKComboState() {
    this->bReplicateTarget = true;
    this->AttackTarget = NULL;
    this->bExitOnTagRelease = false;
    this->bTagReleaseNeedsEarlyExit = false;
}


