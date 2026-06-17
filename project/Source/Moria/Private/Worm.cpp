#include "Worm.h"

AWorm::AWorm(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnDuration = 1.00f;
    this->DigDepth = 200.00f;
    this->DigDuration = 1.00f;
}

void AWorm::MulticastDigOut_Implementation(const FVector& InLocation, const float InYaw) {
}


