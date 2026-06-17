#include "WatcherTentacleBehaviorMachines.h"
#include "WatcherTentacleBehaviorMachine.h"

UWatcherTentacleBehaviorMachines::UWatcherTentacleBehaviorMachines() {
    this->bAllChildrenActive = true;
    this->RequiredChildType = UWatcherTentacleBehaviorMachine::StaticClass();
}

UWatcherTentacleBehaviorMachine* UWatcherTentacleBehaviorMachines::GetMachineByIndex(int32 TentacleIndex) {
    return NULL;
}


