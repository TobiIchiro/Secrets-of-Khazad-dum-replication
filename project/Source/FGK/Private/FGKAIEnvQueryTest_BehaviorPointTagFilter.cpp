#include "FGKAIEnvQueryTest_BehaviorPointTagFilter.h"

UFGKAIEnvQueryTest_BehaviorPointTagFilter::UFGKAIEnvQueryTest_BehaviorPointTagFilter() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bRequireAny = false;
    this->bRequireExact = true;
}


