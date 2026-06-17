#include "FGKRadialDamageEvent.h"

FFGKRadialDamageEvent::FFGKRadialDamageEvent() {
    this->Timestamp = 0.00f;
    this->Intensity = EFGKReactionIntensity::None;
    this->Result = EFGKReactionResult::OnFeet;
}

