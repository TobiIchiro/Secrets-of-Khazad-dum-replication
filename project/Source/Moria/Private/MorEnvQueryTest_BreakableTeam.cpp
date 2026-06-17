#include "MorEnvQueryTest_BreakableTeam.h"

UMorEnvQueryTest_BreakableTeam::UMorEnvQueryTest_BreakableTeam() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->AttitudeFilter = ETeamAttitude::Hostile;
    this->bUseQuerierTeam = true;
    this->TestTeam = EMoriaTeam::Goblins;
}


