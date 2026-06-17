#include "WatcherAnimInstance.h"

UWatcherAnimInstance::UWatcherAnimInstance() {
    this->Watcher = NULL;
    this->bWatcherDead = false;
    this->BodyState = EWatcherBodyCState::CSt_WatcherBody_Invisible;
    this->TentacleBlendDelay = 1.00f;
    this->TentacleAimDelay = 1.00f;
}

void UWatcherAnimInstance::TentacleStateChanged_Implementation(int32 TentacleIndex, EWatcherTentacleCState OldState, EWatcherTentacleCState NewState) {
}

void UWatcherAnimInstance::SetTentacleAimLocation(int32 TentacleIndex, FVector WorldLocation) {
}

bool UWatcherAnimInstance::IsTentacleStateConfirmed(int32 TentacleIndex, EWatcherTentacleCState State) const {
    return false;
}

bool UWatcherAnimInstance::IsBodyStateConfirmed(EWatcherBodyCState State) const {
    return false;
}

EWatcherTentacleCState UWatcherAnimInstance::GetTentacleState(int32 TentacleIndex) const {
    return EWatcherTentacleCState::CSt_WatcherTentacle_FromBody;
}

float UWatcherAnimInstance::GetTentacleBlendWeight(int32 TentacleIndex) const {
    return 0.0f;
}

FVector UWatcherAnimInstance::GetTentacleAimLocation(int32 TentacleIndex) const {
    return FVector{};
}

float UWatcherAnimInstance::GetTentacleAimAlpha(int32 TentacleIndex) const {
    return 0.0f;
}

void UWatcherAnimInstance::ConfirmTentacleState(int32 TentacleIndex, EWatcherTentacleCState State) {
}

void UWatcherAnimInstance::ConfirmBodyState(EWatcherBodyCState State) {
}

void UWatcherAnimInstance::CancelTentacleAim(int32 TentacleIndex) {
}

void UWatcherAnimInstance::BodyStateChanged_Implementation(EWatcherBodyCState OldState, EWatcherBodyCState NewState) {
}


