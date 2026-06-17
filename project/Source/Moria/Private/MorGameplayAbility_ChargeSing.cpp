#include "MorGameplayAbility_ChargeSing.h"

UMorGameplayAbility_ChargeSing::UMorGameplayAbility_ChargeSing() {
    this->bDisplayAsHold = true;
    this->SongType = EMSongType::Keg;
    this->SpecificSongSectionIndex = 0;
    this->bTrackInput = true;
    this->PrimeTime = 7.00f;
    this->PrimeInteractableClass = NULL;
    this->SongPrimedEffect = NULL;
    this->SongCompletedEffect = NULL;
    this->CurrentInteractable = NULL;
    this->PrimeInteractable = NULL;
    this->InteractableClass = NULL;
    this->InteractionShowTime = 0.00f;
    this->bShowAfterPrimeInteractConfirmed = false;
    this->bShowAfterPrimeRelease = false;
    this->bInterruptibleMonatage = false;
    this->InterruptionThreshold = 0.20f;
    this->bAutoTerminate = false;
    this->bAutoTerminateAfterPrime = false;
    this->AutoTerminateTime = 0.00f;
    this->bUseRotationTowardsInteraction = false;
    this->bUseTargetLockRotation = false;
    this->TargetInteractionActor = NULL;
    this->RotationTask = NULL;
    this->WaitForInputTask = NULL;
    this->PrimeWaitForInputReleaseTask = NULL;
    this->ExtendedPrimeWaitForInputReleaseTask = NULL;
    this->bStopOnPrimaryHandItemEquip = false;
    this->bStopOnPrimaryHandItemUnequip = false;
    this->bStopOnAbilityItemUnequip = false;
}

void UMorGameplayAbility_ChargeSing::SongEnded(bool bIsAborted, const uint8 SongID, const FMorSongInstanceData& SongInstanceData) {
}

void UMorGameplayAbility_ChargeSing::Released(float HoldTime) {
}

void UMorGameplayAbility_ChargeSing::Primed() {
}

void UMorGameplayAbility_ChargeSing::OnOwnerVoiceStateChanged(EMusicState NewState) {
}

void UMorGameplayAbility_ChargeSing::OnInputPressedCallback(EInputType InputType) {
}

void UMorGameplayAbility_ChargeSing::ItemUnequipped(const FItemHandle& Item) {
}

void UMorGameplayAbility_ChargeSing::ItemEquipped(const FItemHandle& Item) {
}

void UMorGameplayAbility_ChargeSing::ForcefullyExitedSong(const EMorSongExitReason ExitReason) {
}

void UMorGameplayAbility_ChargeSing::ExtendedPrimeReleased(float HoldTime) {
}

void UMorGameplayAbility_ChargeSing::ExtendedPrime() {
}

void UMorGameplayAbility_ChargeSing::AnimationEnd(bool bCompleted) {
}


