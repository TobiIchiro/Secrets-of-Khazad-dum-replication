#include "MorDamageMessage.h"

FMorDamageMessage::FMorDamageMessage() {
    this->SourceActor = NULL;
    this->TargetActor = NULL;
    this->bIsOverridenLocation = false;
    this->OriginalDamage = 0.00f;
    this->ModifiedDamage = 0.00f;
    this->ShieldDamage = 0.00f;
    this->ArmorDamage = 0.00f;
    this->HealthDamage = 0.00f;
    this->SourceTier = 0;
    this->TargetTier = 0;
    this->TierMultiplier = 0.00f;
    this->bPerfectBlock = false;
}

