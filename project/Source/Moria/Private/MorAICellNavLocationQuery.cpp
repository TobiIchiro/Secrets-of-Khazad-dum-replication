#include "MorAICellNavLocationQuery.h"

FMorAICellNavLocationQuery::FMorAICellNavLocationQuery() {
    this->CurrentStatus = EMorAINavigationQueryStatus::Invalid;
    this->NumQueryAttemptsLeft = 0;
}

