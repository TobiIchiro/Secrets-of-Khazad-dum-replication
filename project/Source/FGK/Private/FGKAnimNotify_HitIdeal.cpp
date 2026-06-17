#include "FGKAnimNotify_HitIdeal.h"
#include "EFGKAnimNotify.h"
#include "FGKMeleeDamage.h"

UFGKAnimNotify_HitIdeal::UFGKAnimNotify_HitIdeal() {
    this->NotifyType = EFGKAnimNotify::HitIdeal;
    this->DamageType = UFGKMeleeDamage::StaticClass();
    this->Sound = NULL;
    this->NiagaraSystem = NULL;
    this->CameraShake_Attacker = NULL;
    this->ForceFeedbackEffect_Attacker = NULL;
    this->CameraShake_Victim = NULL;
    this->ForceFeedbackEffect_Victim = NULL;
}


