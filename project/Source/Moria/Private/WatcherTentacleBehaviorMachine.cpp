#include "WatcherTentacleBehaviorMachine.h"
#include "WatcherTentacleBState.h"

UWatcherTentacleBehaviorMachine::UWatcherTentacleBehaviorMachine() {
    this->RequiredChildType = UWatcherTentacleBState::StaticClass();
    this->RequestedTentacleState = NULL;
    this->TentacleIndex = 0;
}


