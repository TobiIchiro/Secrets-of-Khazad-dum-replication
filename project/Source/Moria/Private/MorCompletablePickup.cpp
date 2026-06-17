#include "MorCompletablePickup.h"

AMorCompletablePickup::AMorCompletablePickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOptOutFromDropItemManagement = true;
    this->ReplacementItem = NULL;
    this->ReplacementItemCount = 0;
    this->GrantedEffectOnReplacement = NULL;
}


