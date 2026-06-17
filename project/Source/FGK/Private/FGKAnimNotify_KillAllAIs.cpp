#include "FGKAnimNotify_KillAllAIs.h"

UFGKAnimNotify_KillAllAIs::UFGKAnimNotify_KillAllAIs() {
    this->TeamAttitude = ETeamAttitude::Friendly;
    this->Radius = 5000.00f;
    this->bRequireAnyTags = true;
}


