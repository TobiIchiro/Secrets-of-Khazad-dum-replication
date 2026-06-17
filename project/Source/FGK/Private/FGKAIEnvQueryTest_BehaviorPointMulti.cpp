#include "FGKAIEnvQueryTest_BehaviorPointMulti.h"

UFGKAIEnvQueryTest_BehaviorPointMulti::UFGKAIEnvQueryTest_BehaviorPointMulti() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TestPriority = EFGKAIBehaviorPointPriority::Low;
    this->bRequireAny = false;
    this->bRequireExact = true;
}


