#include "MorUIFocusManager.h"

UMorUIFocusManager::UMorUIFocusManager() {
    this->bEnableCustomFocus = true;
    this->bLogs = false;
    this->bAdvanceLogs = false;
    this->FixedFocusedCatcher = NULL;
    this->FixedFocusedCatcherClass = NULL;
}

void UMorUIFocusManager::OnFocusUserPlayEnded(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


