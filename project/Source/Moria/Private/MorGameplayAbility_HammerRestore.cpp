#include "MorGameplayAbility_HammerRestore.h"

UMorGameplayAbility_HammerRestore::UMorGameplayAbility_HammerRestore() {
    this->RestoreRange = 250.00f;
    this->RestoreReticleScale = 1.00f;
    this->RequiresStrongerToolText = FText::FromString(TEXT("{0} Required"));
    this->FallbackTierName = FText::FromString(TEXT("Stronger Hammer"));
    this->FullyHealedConstructionText = FText::FromString(TEXT("Fully Healed"));
    this->ConstructionHealthText = FText::FromString(TEXT("Health: {0}%"));
    this->HitVfx = NULL;
    this->HealedHitVfx = NULL;
    this->HitSfx = NULL;
    this->HealedHitSfx = NULL;
    this->FailedHitSfx = NULL;
    this->HitEffect = NULL;
}


