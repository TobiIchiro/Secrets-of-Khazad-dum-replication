#include "MorEnvQueryTest_ProjectToNav.h"

UMorEnvQueryTest_ProjectToNav::UMorEnvQueryTest_ProjectToNav() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


