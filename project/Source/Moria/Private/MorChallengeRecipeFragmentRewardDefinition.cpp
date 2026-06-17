#include "MorChallengeRecipeFragmentRewardDefinition.h"

FMorChallengeRecipeFragmentRewardDefinition::FMorChallengeRecipeFragmentRewardDefinition() {
    this->Priority = EMorChallengeRecipeFragmentRewardPriority::High;
    this->SandboxUnlockOrder = 0;
    this->bCardCountFromNumFragments = false;
    this->CardCount = 0;
}

