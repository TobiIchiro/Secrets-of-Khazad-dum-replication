#include "FGKTransition.h"

FFGKTransition::FFGKTransition() {
    this->TransitionFilter = EFGKTransitionFilter::Whitelist;
    this->bDebugThisTransition = false;
    this->Context = NULL;
}

