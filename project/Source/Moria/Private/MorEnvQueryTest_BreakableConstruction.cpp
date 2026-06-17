#include "MorEnvQueryTest_BreakableConstruction.h"

UMorEnvQueryTest_BreakableConstruction::UMorEnvQueryTest_BreakableConstruction() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Filter = EBreakableConstruction::PlayerConstruction;
}


