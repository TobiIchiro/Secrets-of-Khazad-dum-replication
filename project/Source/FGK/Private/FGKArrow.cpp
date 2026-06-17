#include "FGKArrow.h"

AFGKArrow::AFGKArrow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LifetimeAfterHit = 3.00f;
    this->PenetrationDistance = 30.00f;
}


