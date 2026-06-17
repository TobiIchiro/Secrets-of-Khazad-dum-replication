#include "MorGameplayAbility_FallAttack.h"

UMorGameplayAbility_FallAttack::UMorGameplayAbility_FallAttack() {
    this->HitSettings.AddDefaulted(1);
    this->FallingTooFarPadding = 5.00f;
    this->TooCloseToGroundAltitude = 100.00f;
    this->SpeedToFall = 1000.00f;
    this->CloseToGroundAltitude = 1000.00f;
    this->DefaultSection = TEXT("Default");
    this->LoopingSection = TEXT("Loop");
    this->LandingSection = TEXT("Landing");
    this->LandedSection = TEXT("Landed");
    this->FallMovementTask = NULL;
}

void UMorGameplayAbility_FallAttack::OnLanded(const FHitResult& FloorHit) {
}

void UMorGameplayAbility_FallAttack::OnCloseToGround(const FHitResult& FloorHit) {
}


