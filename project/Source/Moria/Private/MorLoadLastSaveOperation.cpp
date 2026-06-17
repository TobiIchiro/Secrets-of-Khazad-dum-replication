#include "MorLoadLastSaveOperation.h"

UMorLoadLastSaveOperation::UMorLoadLastSaveOperation() {
    this->bIsRunning = false;
    this->MenuManager = NULL;
}

bool UMorLoadLastSaveOperation::Start(bool bInMultiplayer) {
    return false;
}

bool UMorLoadLastSaveOperation::IsRunning() const {
    return false;
}

void UMorLoadLastSaveOperation::HandleOnWorldsListLoaded(const TArray<UMorWorldSelectItem*>& Worlds) {
}

void UMorLoadLastSaveOperation::HandleOnPremiumSubscriptionChecked(bool bIsPremium) {
}


UMorGameSessionManager* UMorLoadLastSaveOperation::GetGameSessionManager() const {
    return NULL;
}


