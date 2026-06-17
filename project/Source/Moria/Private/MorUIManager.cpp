#include "MorUIManager.h"

UMorUIManager::UMorUIManager() {
    this->MorPlayer = NULL;
}

UFGKUIScreen* UMorUIManager::ShowScreenWithHandle(const FMorUIScreenConfigRowHandle& ScreenHandle) {
    return NULL;
}

void UMorUIManager::ShowScreenInstance(UFGKUIScreen* ScreenInstance) {
}

bool UMorUIManager::IsCurrentScreenActivatedFromInteract() const {
    return false;
}

void UMorUIManager::CycleHudVisibility() {
}

UMorUIManager* UMorUIManager::BPGetManager(const UObject* WorldContextObject) {
    return NULL;
}


