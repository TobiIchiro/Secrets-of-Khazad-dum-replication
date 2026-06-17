#include "MorWildFloraReceptacle.h"

AMorWildFloraReceptacle::AMorWildFloraReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldGrowOnStart = true;
    this->GrowInsideHearthRadius = true;
}

void AMorWildFloraReceptacle::OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds) {
}


