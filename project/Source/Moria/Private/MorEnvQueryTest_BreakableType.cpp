#include "MorEnvQueryTest_BreakableType.h"

UMorEnvQueryTest_BreakableType::UMorEnvQueryTest_BreakableType() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Filter = EBreakableType::ActorsAndInstances;
}


