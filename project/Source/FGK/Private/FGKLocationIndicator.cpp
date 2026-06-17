#include "FGKLocationIndicator.h"

AFGKLocationIndicator::AFGKLocationIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
}

FVector AFGKLocationIndicator::GetScreenLocation() const {
    return FVector{};
}


