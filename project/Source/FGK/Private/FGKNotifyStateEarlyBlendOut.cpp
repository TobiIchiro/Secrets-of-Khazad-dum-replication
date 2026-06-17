#include "FGKNotifyStateEarlyBlendOut.h"
#include "EFGKAnimNotifyState.h"

UFGKNotifyStateEarlyBlendOut::UFGKNotifyStateEarlyBlendOut() {
    this->NotifyStateType = EFGKAnimNotifyState::EarlyBlendOut;
    this->ThisMontage = NULL;
    this->BlendOutTime = 0.25f;
    this->bCheckStance = false;
    this->StanceEquals = EFGKStance::Standing;
    this->bCheckMovementInput = false;
}


