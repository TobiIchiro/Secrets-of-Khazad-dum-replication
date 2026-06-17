#include "FGKNotifyStateMovementAction.h"
#include "EFGKAnimNotifyState.h"

UFGKNotifyStateMovementAction::UFGKNotifyStateMovementAction() {
    this->NotifyStateType = EFGKAnimNotifyState::MovementAction;
    this->MovementAction = EFGKMovementAction::None;
}


