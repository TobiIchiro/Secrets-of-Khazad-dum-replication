#include "MorEnvQueryTest_IsInPlayerBase.h"

UMorEnvQueryTest_IsInPlayerBase::UMorEnvQueryTest_IsInPlayerBase() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bOnlyOnBaseContainingQuerier = false;
}


