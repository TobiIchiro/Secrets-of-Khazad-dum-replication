#include "MorGameplayAbility_Reaction.h"

UMorGameplayAbility_Reaction::UMorGameplayAbility_Reaction() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->bRetriggerInstancedAbility = true;
    this->bSnapToFace = true;
    this->Severity = EReactionSeverity::Heavy;
    this->HitFromDirection = EHitFromDirection::Front;
    this->BoneHitFilter = EBoneHitFilter::None;
    this->Montage = NULL;
    this->MontageRate = 1.00f;
    this->RootMotionScale = 1.00f;
    this->ReactingEffectClass = NULL;
    this->bRotateToSpawnRotation = false;
    this->bSpawnRemainsOnActivate = false;
    this->RemainsToSpawn = NULL;
    this->RotateTask = NULL;
}

void UMorGameplayAbility_Reaction::OnNotifyStateEndReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation) {
}

void UMorGameplayAbility_Reaction::OnNotifyStateBeginReceived(const UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalAnimationTime) {
}

void UMorGameplayAbility_Reaction::OnNotifyReceived(const UFGKAnimNotify* Notify) {
}

void UMorGameplayAbility_Reaction::EarlyExitInput(EInputType Type) {
}

void UMorGameplayAbility_Reaction::Deactivate() {
}


