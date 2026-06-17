#include "MorAICondition_MoveToPathExist.h"

UMorAICondition_MoveToPathExist::UMorAICondition_MoveToPathExist() {
    this->AcceptanceRadius = 100.00f;
    this->bShouldProjectGoalWithExtent = false;
    this->NavigationFilter = NULL;
    this->bUseEvaluateInterval = true;
    this->EvaluateInterval = 1.00f;
    this->LastTimeChecked = 0.00f;
}


