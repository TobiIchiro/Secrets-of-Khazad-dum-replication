#include "FGKBehaviorState_RangeAttack.h"

UFGKBehaviorState_RangeAttack::UFGKBehaviorState_RangeAttack() {
    this->Target = NULL;
    this->NumFired = 0;
}

void UFGKBehaviorState_RangeAttack::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget) {
}


