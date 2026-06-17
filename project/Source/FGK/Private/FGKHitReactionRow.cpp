#include "FGKHitReactionRow.h"

FFGKHitReactionRow::FFGKHitReactionRow() {
    this->StateClass = NULL;
    this->bOnlyExplicitCombos = false;
    this->Stance = EFGKReactionStance::Standing;
    this->Intensity = EFGKReactionIntensity::None;
    this->Result = EFGKReactionResult::OnFeet;
    this->DamageType = NULL;
    this->HitFromDirection = EFGKHitFromDirection::Front;
    this->HitFromHeight = EFGKHitFromHeight::Default;
    this->MaxVictimHealthPercentage = 0.00f;
    this->MinVictimHealthPercentage = 0.00f;
    this->CooldownTime = 0.00f;
    this->bOnlySelectedOnce = false;
    this->Weight = 0;
}

