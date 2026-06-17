#include "MorTreasureComponent.h"

UMorTreasureComponent::UMorTreasureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TreasureType = EMorTreasureType::Treasure;
    this->InnateTreasureScore = 0;
    this->TreasureScoreCheckRadius = 100.00f;
    this->StackToTreasureScoreCurve = NULL;
    this->bUseCountInsteadOfStacks = false;
}

int32 UMorTreasureComponent::GetTotalTreasureScore() const {
    return 0;
}

int32 UMorTreasureComponent::GetLocalTreasureScore() const {
    return 0;
}


