#include "WatcherBehaviorMachine.h"
#include "WatcherBehaviorState.h"

UWatcherBehaviorMachine::UWatcherBehaviorMachine() {
    this->RequiredChildType = UWatcherBehaviorState::StaticClass();
}


