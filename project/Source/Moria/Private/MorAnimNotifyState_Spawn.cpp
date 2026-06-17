#include "MorAnimNotifyState_Spawn.h"
#include "EFGKAnimNotifyState.h"

UMorAnimNotifyState_Spawn::UMorAnimNotifyState_Spawn() {
    this->NotifyStateType = EFGKAnimNotifyState::Custom04;
    this->ActorType = NULL;
    this->bAttachToActor = false;
    this->Spawned = NULL;
}

void UMorAnimNotifyState_Spawn::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) const {
}


