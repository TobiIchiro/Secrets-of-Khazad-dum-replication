#include "SurvivalSettings.h"

USurvivalSettings::USurvivalSettings() {
    this->NoEpicPackBuff = NULL;
    this->EnergyRegenEffect = NULL;
    this->MaxDamageReduction = 1.00f;
    this->StaminaPerPip = 25.00f;
    this->bModifyMaxStamina = true;
    this->EnergyPerStaminaPip = 20.00f;
    this->StaminaPipsAtZeroEnergy = 1;
    this->StaminaRegenEffect = NULL;
    this->bResetStaminaTimerOnlyOnMaxChange = false;
    this->bSprintingPreventsStaminaRegen = false;
    this->bNotMovingOnGroundPreventsStaminaRegen = false;
}

float USurvivalSettings::GetPipsForEnergy(float Energy) const {
    return 0.0f;
}

TArray<FStatLinkedBuff> USurvivalSettings::GetBuffsFromAttribute(const FGameplayAttribute& Attribute) {
    return TArray<FStatLinkedBuff>();
}


