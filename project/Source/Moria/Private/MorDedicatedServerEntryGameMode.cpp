#include "MorDedicatedServerEntryGameMode.h"

AMorDedicatedServerEntryGameMode::AMorDedicatedServerEntryGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameSessionManager = NULL;
    this->WorldSelectionManager = NULL;
    this->MenuManager = NULL;
}

void AMorDedicatedServerEntryGameMode::HandleOnWorldsListLoaded(const TArray<UMorWorldSelectItem*>& Worlds) {
}

void AMorDedicatedServerEntryGameMode::HandleOnPreviousSessionDestroyed() {
}

void AMorDedicatedServerEntryGameMode::HandleOnPremiumSubscriptionChecked(bool bIsPremium) {
}

void AMorDedicatedServerEntryGameMode::HandleOnPlayerLoginStatusChanged(EPlayerLoginStatus LoginStatus) {
}

void AMorDedicatedServerEntryGameMode::HandleOnLoginCompleted(bool bIsSuccessful, ELoginFailedReason Reason, EMorOssLoginFailedReason OssReason) {
}

void AMorDedicatedServerEntryGameMode::HandleOnHostGameStatusChanged(EPlayerHostStatus Status, EHostGameFailedReason Reason) {
}


