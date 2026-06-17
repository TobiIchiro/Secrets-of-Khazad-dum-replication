#include "FGKCondition_TargetBase.h"

UFGKCondition_TargetBase::UFGKCondition_TargetBase() {
    this->ObjectTargetTeam = ETeamAttitude::Hostile;
    this->bIsMeleeTarget = false;
    this->bIsLastMeleeTarget = false;
    this->bIsKilledTarget = false;
}


