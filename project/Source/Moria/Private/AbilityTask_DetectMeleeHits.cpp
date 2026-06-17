#include "AbilityTask_DetectMeleeHits.h"

UAbilityTask_DetectMeleeHits::UAbilityTask_DetectMeleeHits() {
    this->HitIndex = 0;
    this->State = NULL;
    this->Source = EFGKHitDetectionSource::MainWeapon;
    this->HitsTeam = EHitsTeam::Both;
    this->ProximityRadius = 0.00f;
    this->ProximityAngle = 0.00f;
    this->bShouldCheckObstruction = false;
}

void UAbilityTask_DetectMeleeHits::OnWeaponOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAbilityTask_DetectMeleeHits::OnWeaponOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAbilityTask_DetectMeleeHits::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

void UAbilityTask_DetectMeleeHits::OnNotifyReceived(const UFGKAnimNotify* Notify) {
}

UAbilityTask_DetectMeleeHits* UAbilityTask_DetectMeleeHits::CreateDetectMeleeHitsTask(UGameplayAbility* OwningAbility, int32 Index, const UFGKAnimNotifyState_HitWindow* NewState, EHitsTeam NewHitsTeam, const FGameplayTagContainer& NewMissTags, float NewProximityRadius, float NewProximityAngle, bool NewBShouldCheckObstruction) {
    return NULL;
}

void UAbilityTask_DetectMeleeHits::CheckForProximityHits() {
}


