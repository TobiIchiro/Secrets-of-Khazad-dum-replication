#include "WatcherTentacleMachine.h"
#include "WatcherTentacleCState.h"

UWatcherTentacleMachine::UWatcherTentacleMachine() {
    this->RequiredChildType = UWatcherTentacleCState::StaticClass();
    this->RequestedTentacleState = NULL;
    this->TentacleIndex = 0;
}


