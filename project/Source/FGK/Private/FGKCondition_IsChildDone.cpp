#include "FGKCondition_IsChildDone.h"

UFGKCondition_IsChildDone::UFGKCondition_IsChildDone() {
    this->StateContext = NULL;
    this->bDoneOnFinish = true;
    this->bDoneOnAbort = true;
    this->bContinueIfChildless = true;
}


