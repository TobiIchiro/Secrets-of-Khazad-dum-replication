#include "FGKAIAttackSettings.h"

UFGKAIAttackSettings::UFGKAIAttackSettings() {
    this->bCanEverAttackBreakables = false;
    this->MaxTargetAlertDistance = 2000.00f;
    this->DistanceType = EFGKDistanceType::THREE_DIMENSIONAL;
    this->MeleeAttackDistance = 150.00f;
    this->MaxTargetRangeAttackDistance = 1500.00f;
    this->MinTargetRangeAttackDistance = 150.00f;
    this->MinRangeAttackAimingInterval = 2.00f;
    this->MaxRangeAttackAimingInterval = 2.50f;
    this->MinRangeAttackFiringInterval = 1.00f;
    this->MaxRangeAttackFiringInterval = 1.30f;
    this->NumFiringsPerAim = 3;
    this->RangeAttackPrecision = 0.75f;
    this->bCanEverMelee = true;
    this->bCanEverRange = true;
}


