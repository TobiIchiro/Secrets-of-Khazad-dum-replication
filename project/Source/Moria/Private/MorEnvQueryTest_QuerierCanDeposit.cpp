#include "MorEnvQueryTest_QuerierCanDeposit.h"

UMorEnvQueryTest_QuerierCanDeposit::UMorEnvQueryTest_QuerierCanDeposit() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bShouldCheckForSpaces = false;
}


