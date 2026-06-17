#include "FGKAnimNotifyState_HitWindow.h"
#include "EFGKAnimNotifyState.h"

UFGKAnimNotifyState_HitWindow::UFGKAnimNotifyState_HitWindow() {
    this->NotifyStateType = EFGKAnimNotifyState::HitWindow;
    this->Source = EFGKHitDetectionSource::MainWeapon;
    this->BoneRadius = 0.00f;
    this->DamageType = NULL;
    this->Sound = NULL;
    this->NiagaraSystem = NULL;
    this->CameraShake_Attacker = NULL;
    this->ForceFeedbackEffect_Attacker = NULL;
    this->CameraShake_Victim = NULL;
    this->ForceFeedbackEffect_Victim = NULL;
    this->bCanDeactivateHit = true;
    this->bNeedsIdeal = true;
    this->Character = NULL;
    this->MontageSource = NULL;
}

void UFGKAnimNotifyState_HitWindow::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) const {
}


