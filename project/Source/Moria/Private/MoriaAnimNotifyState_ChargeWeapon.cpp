#include "MoriaAnimNotifyState_ChargeWeapon.h"
#include "EFGKAnimNotifyState.h"

UMoriaAnimNotifyState_ChargeWeapon::UMoriaAnimNotifyState_ChargeWeapon() {
    this->NotifyStateType = EFGKAnimNotifyState::Custom03;
}

void UMoriaAnimNotifyState_ChargeWeapon::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) const {
}


