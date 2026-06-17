#include "MorTutorialManager.h"

AMorTutorialManager::AMorTutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialTable = NULL;
    this->AnimationAbilityToPlayOnFinishingTutorialSegment = NULL;
}

void AMorTutorialManager::TriggerTutorialUponCompletion(ACharacter* Player, const FMorTutorialRowHandle& CompletedTutorialRowHandle) {
}

void AMorTutorialManager::TriggerTutorial(ACharacter* Player, const FMorTutorialRowHandle& TutorialRowHandle) {
}

void AMorTutorialManager::SetTutorialEntrySelected(AMorPlayerController* Player, const FMorTutorialRowHandle& TutorialRowHandle) {
}

void AMorTutorialManager::PlayTutorialAnimationWhenPossible(ACharacter* Player, UAnimMontage* Anim) {
}

bool AMorTutorialManager::IsTutorialListItemCompleted(const ACharacter* Player, FMorTutorialRowHandle Tutorial, int32 TutorialListItemIndex) {
    return false;
}

bool AMorTutorialManager::IsTutorialCompleted(const ACharacter* Player, FMorTutorialRowHandle Tutorial) {
    return false;
}

UMorTutorialComponent* AMorTutorialManager::GetTutorialComponentFromPawn(const APawn* Pawn) const {
    return NULL;
}

UMorTutorialComponent* AMorTutorialManager::GetTutorialComponentFromController(const APlayerController* Controller) const {
    return NULL;
}

void AMorTutorialManager::GetClientTutorials(TArray<FMorTutorialRowHandle>& ClientTutorials) {
}

bool AMorTutorialManager::CanTriggerTutorial(const ACharacter* Player, FMorTutorialRowHandle Tutorial) const {
    return false;
}


