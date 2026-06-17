#include "MorEnvQueryTest_BreakableBehavior.h"

UMorEnvQueryTest_BreakableBehavior::UMorEnvQueryTest_BreakableBehavior() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->BreakableBehavior = EMorBreakableBehavior::BreakableAndRestorable;
}


