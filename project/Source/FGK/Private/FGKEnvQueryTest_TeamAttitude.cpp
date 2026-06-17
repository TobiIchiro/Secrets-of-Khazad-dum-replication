#include "FGKEnvQueryTest_TeamAttitude.h"

UFGKEnvQueryTest_TeamAttitude::UFGKEnvQueryTest_TeamAttitude() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TeamAttitude = ETeamAttitude::Hostile;
}


