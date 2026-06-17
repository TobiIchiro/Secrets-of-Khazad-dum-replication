#include "MorEnvQueryTest_SettlementStone.h"

UMorEnvQueryTest_SettlementStone::UMorEnvQueryTest_SettlementStone() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bOnlyActive = false;
    this->bOnlyWithActiveLevelUpSong = false;
    this->bOnlyStonesAllowedToStoreActivityPoints = false;
}


