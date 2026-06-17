#include "FGKPointDamageEvent.h"

FFGKPointDamageEvent::FFGKPointDamageEvent() {
    this->Timestamp = 0.00f;
    this->Intensity = EFGKReactionIntensity::None;
    this->Result = EFGKReactionResult::OnFeet;
    this->Sound = NULL;
    this->NiagaraSystem = NULL;
    this->CameraShake = NULL;
    this->ForceFeedbackEffect = NULL;
}

