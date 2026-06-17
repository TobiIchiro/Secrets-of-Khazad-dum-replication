#include "FGKCharacterCombatSettings.h"

UFGKCharacterCombatSettings::UFGKCharacterCombatSettings() {
    this->bRequestVictimToForceTarget = false;
    this->bGatherCombatStats = false;
    this->GridWeight = 4;
    this->UnarmedAimingMaxTargetAngle = 20.00f;
    this->UnarmedAimingMaxTargetAngleZ = 20.00f;
    this->CombatGridSettings = NULL;
    this->UnarmedAttackTable = NULL;
    this->TargetingAttackTable = NULL;
}


