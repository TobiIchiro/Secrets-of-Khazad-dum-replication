#include "MorEnvQueryTest_BreakableAttitude.h"

UMorEnvQueryTest_BreakableAttitude::UMorEnvQueryTest_BreakableAttitude() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Filter = ETeamAttitude::Friendly;
}


