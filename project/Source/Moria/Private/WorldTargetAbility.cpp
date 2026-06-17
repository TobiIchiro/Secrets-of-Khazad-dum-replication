#include "WorldTargetAbility.h"

UWorldTargetAbility::UWorldTargetAbility() {
    this->TargetingClass = NULL;
    this->CurrentWaitTask = NULL;
    this->OwnerActor = NULL;
}

void UWorldTargetAbility::OnValidData(const FGameplayAbilityTargetDataHandle& Data) {
}

void UWorldTargetAbility::OnScreenShown(UFGKUIScreen* ScreenInstance) {
}

void UWorldTargetAbility::OnScreenHidden(UFGKUIScreen* ScreenInstance) {
}

void UWorldTargetAbility::OnCanceled(const FGameplayAbilityTargetDataHandle& Data) {
}


