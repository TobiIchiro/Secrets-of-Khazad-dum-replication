#include "MorEnvQueryTest_BreakableReceptacle.h"

UMorEnvQueryTest_BreakableReceptacle::UMorEnvQueryTest_BreakableReceptacle() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Filter = EBreakableReceptacle::NonReceptacles;
}


