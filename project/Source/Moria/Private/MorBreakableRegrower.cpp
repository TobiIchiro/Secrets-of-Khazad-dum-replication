#include "MorBreakableRegrower.h"

AMorBreakableRegrower::AMorBreakableRegrower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldRegrowInsideHearthRadius = false;
    this->ChildBreakable = NULL;
    this->bCanRespawn = true;
    this->SleepCountToRespawn = 1;
    this->CurrentNightCount = 0;
    this->LastNightCount = 0;
    this->bContainerSpawned = true;
}

void AMorBreakableRegrower::UpdateInvulnerability() {
}

void AMorBreakableRegrower::OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds) {
}

void AMorBreakableRegrower::OnChildBreakableBroken(bool bPreRuined) {
}


