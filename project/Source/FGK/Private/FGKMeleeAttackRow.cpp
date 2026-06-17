#include "FGKMeleeAttackRow.h"

FFGKMeleeAttackRow::FFGKMeleeAttackRow() {
    this->StateClass = NULL;
    this->SpecialRequirements = 0;
    this->bMustBeComboAttack = false;
    this->bUsePreviousAttackTarget = false;
    this->bOnlyComboFromHit = false;
    this->bCancelAttacks = false;
    this->bComboFromAll = false;
    this->bOnlyExplicitCombos = false;
    this->bIsTorsoAttack = false;
    this->TargetRange = EFGKMeleeTargetRangeMeasure::Untargeted;
    this->bRequireTarget = false;
    this->MaxTargetRange = 0.00f;
    this->MinTargetRange = 0.00f;
    this->MaxTargetOffsetZ = 0.00f;
    this->MinTargetOffsetZ = 0.00f;
    this->MaxTargetAngle = 0.00f;
    this->MaxTargetAngleZ = 0.00f;
    this->MinTargetApproachTime = 0.00f;
    this->MaxTargetApproachTime = 0.00f;
    this->ApproachVelocityScale = 0.00f;
    this->MaxTargetApproachDecel = 0.00f;
    this->MaxTargetApproachAccel = 0.00f;
    this->MaxTargetApproachSidewaysVel = 0.00f;
    this->InputVelocityBonus = 0.00f;
    this->TargetUI = NULL;
    this->Priority = 0.00f;
    this->Score_TargetOnLeft = EFGKBooleanFilter::None;
    this->Filter_AerialAttack = EFGKBooleanFilter::None;
    this->Filter_AttackerOnGround = EFGKBooleanFilter::None;
    this->Filter_AttackerSprinting = EFGKBooleanFilter::None;
    this->Filter_TargetOnGround = EFGKBooleanFilter::None;
    this->Weight = 0;
}

