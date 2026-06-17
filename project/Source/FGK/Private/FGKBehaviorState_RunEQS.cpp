#include "FGKBehaviorState_RunEQS.h"

UFGKBehaviorState_RunEQS::UFGKBehaviorState_RunEQS() {
    this->QueryTemplate = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bAbortOnNoResults = true;
}


