#include "FGKWeakPoint.h"
#include "FGKArrowDamage.h"

UFGKWeakPoint::UFGKWeakPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AcceptDamageType = UFGKArrowDamage::StaticClass();
    this->ModifiedDamageType = NULL;
    this->ReactionIntensity = EFGKReactionIntensity::None;
    this->DamageModifier = 1.00f;
    this->bShouldMatchDirection = false;
}


