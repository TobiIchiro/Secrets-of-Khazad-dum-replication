#include "MorEnvQueryTest_IsInShadowFluid.h"

UMorEnvQueryTest_IsInShadowFluid::UMorEnvQueryTest_IsInShadowFluid() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


