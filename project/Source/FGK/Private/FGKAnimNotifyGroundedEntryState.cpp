#include "FGKAnimNotifyGroundedEntryState.h"
#include "EFGKAnimNotify.h"

UFGKAnimNotifyGroundedEntryState::UFGKAnimNotifyGroundedEntryState() {
    this->NotifyType = EFGKAnimNotify::GroundedEntry;
    this->GroundedEntryState = EFGKGroundedEntryState::None;
}


