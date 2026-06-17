#include "ChallengeProxy.h"

AChallengeProxy::AChallengeProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDeleteInStandalone = true;
    this->bAlwaysDelete = true;
}


