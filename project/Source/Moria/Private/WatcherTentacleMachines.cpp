#include "WatcherTentacleMachines.h"
#include "WatcherTentacleMachine.h"

UWatcherTentacleMachines::UWatcherTentacleMachines() {
    this->bAllChildrenActive = true;
    this->RequiredChildType = UWatcherTentacleMachine::StaticClass();
}

UWatcherTentacleMachine* UWatcherTentacleMachines::GetMachineByIndex(int32 TentacleIndex) {
    return NULL;
}


