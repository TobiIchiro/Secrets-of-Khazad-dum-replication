#include "MorEnvQueryTest_IsSinging.h"

UMorEnvQueryTest_IsSinging::UMorEnvQueryTest_IsSinging() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bAllowHumming = true;
    this->bCheckJoinability = false;
}


