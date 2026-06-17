#include "FGKCondition_CharacterBase.h"

UFGKCondition_CharacterBase::UFGKCondition_CharacterBase() {
    this->bConditionSubjectIsTarget = false;
    this->bConditionSubjectIsTarget_AI = false;
    this->SubjectTargetTeam = ETeamAttitude::Hostile;
    this->Character = NULL;
}


