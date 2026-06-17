#include "MorEnvQueryTest_QuerierCanCraft.h"

UMorEnvQueryTest_QuerierCanCraft::UMorEnvQueryTest_QuerierCanCraft() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bUseInventoryFilter = false;
    this->CraftType = ENpcCraftType::Cooking;
}


