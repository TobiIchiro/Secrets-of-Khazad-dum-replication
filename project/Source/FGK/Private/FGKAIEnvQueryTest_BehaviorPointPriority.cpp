#include "FGKAIEnvQueryTest_BehaviorPointPriority.h"

UFGKAIEnvQueryTest_BehaviorPointPriority::UFGKAIEnvQueryTest_BehaviorPointPriority() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestPriority = EFGKAIBehaviorPointPriority::Low;
}


