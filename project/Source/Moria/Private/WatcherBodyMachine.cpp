#include "WatcherBodyMachine.h"
#include "WatcherBodyCState.h"

UWatcherBodyMachine::UWatcherBodyMachine() {
    this->RequiredChildType = UWatcherBodyCState::StaticClass();
    this->RequestedBodyState = NULL;
}


