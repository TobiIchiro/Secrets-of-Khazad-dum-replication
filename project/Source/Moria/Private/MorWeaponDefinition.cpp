#include "MorWeaponDefinition.h"

FMorWeaponDefinition::FMorWeaponDefinition() {
    this->Durability = 0;
    this->Tier = 0;
    this->Damage = 0;
    this->Speed = 0.00f;
    this->ArmorPenetration = 0.00f;
    this->StaminaCost = 0.00f;
    this->EnergyCost = 0.00f;
    this->BlockDamageReduction = 0.00f;
    this->RepairCostCurve = NULL;
}

