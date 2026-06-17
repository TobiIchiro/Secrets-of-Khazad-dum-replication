#include "MorCharacterAnimInstance.h"

UMorCharacterAnimInstance::UMorCharacterAnimInstance() {
    this->BowAim_MinPitch = -80.00f;
    this->BowAim_MaxPitch = 80.00f;
    this->PickAim_MinPitch = -60.00f;
    this->PickAim_MaxPitch = 75.00f;
    this->BlockAim_MinPitch = 0.00f;
    this->BlockAim_MaxPitch = 60.00f;
    this->Aim_MinRange = 80.00f;
    this->bLimbsDebugDraw = false;
}

void UMorCharacterAnimInstance::HandleOnMontageStarted(UAnimMontage* Montage) {
}

void UMorCharacterAnimInstance::HandleOnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}


