#include "MorEnvQueryTest_ActorTags.h"

UMorEnvQueryTest_ActorTags::UMorEnvQueryTest_ActorTags() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bPartialMatch = false;
    this->bUseQueryOwnerTags = false;
}


