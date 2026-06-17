#include "MorAIEnvQueryTest_Watcher_InVolume.h"

UMorAIEnvQueryTest_Watcher_InVolume::UMorAIEnvQueryTest_Watcher_InVolume() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TriggerTypeToCheck = EMorWatcherTriggerType::Emerge;
}


