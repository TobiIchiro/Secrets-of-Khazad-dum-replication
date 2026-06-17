#include "MorBreadcrumbEventListener.h"

FMorBreadcrumbEventListener::FMorBreadcrumbEventListener() {
    this->MatchStrategy = EMorBreadcrumbMatchStrategy::AnyParent;
    this->CountStrategy = EMorBreadcrumbCountStrategy::Invalid;
    this->Count = 0;
}

