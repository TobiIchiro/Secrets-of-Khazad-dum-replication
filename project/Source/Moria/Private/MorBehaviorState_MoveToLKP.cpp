#include "MorBehaviorState_MoveToLKP.h"

UMorBehaviorState_MoveToLKP::UMorBehaviorState_MoveToLKP() {
    this->PerceptionComponent = NULL;
    this->TrackedActor = NULL;
}

void UMorBehaviorState_MoveToLKP::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void UMorBehaviorState_MoveToLKP::OnCurrentTargetChanged(TEnumAsByte<ETeamAttitude::Type> Type, AActor* NewTarget, AActor* OldTarget) {
}


