#include "MorEnvQueryTest_SameBubble.h"

UMorEnvQueryTest_SameBubble::UMorEnvQueryTest_SameBubble() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = NULL;
}


