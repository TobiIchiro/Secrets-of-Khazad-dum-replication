#include "MorGameplayAbility_Block.h"

UMorGameplayAbility_Block::UMorGameplayAbility_Block() {
    this->PerfectBlockCostMultiplier = 1.00f;
    this->Montage = NULL;
    this->NoBlendMontage = NULL;
    this->StartSectionName = TEXT("Default");
    this->LoopSectionName = TEXT("bLock");
    this->BlockingEffect = NULL;
    this->PerfectBlockingEffect = NULL;
    this->MontagePlayed = NULL;
}

void UMorGameplayAbility_Block::OnRequestEnded(float HoldTime) {
}


