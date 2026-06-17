#include "MorMontageState_ClimbDownToRope.h"

UMorMontageState_ClimbDownToRope::UMorMontageState_ClimbDownToRope() {
    this->bReplicateTarget = true;
    this->FailDistance = 5.00f;
    this->Rope = NULL;
    this->MontageThatWasPlayed = NULL;
}


