#include "MorBehaviorState_SetCanBeDamaged.h"

UMorBehaviorState_SetCanBeDamaged::UMorBehaviorState_SetCanBeDamaged() {
    this->bSetCanBeDamaged = false;
    this->Subject = ESetCanBeDamagedSubject::Self;
    this->TargetAttitude = ETeamAttitude::Hostile;
}


