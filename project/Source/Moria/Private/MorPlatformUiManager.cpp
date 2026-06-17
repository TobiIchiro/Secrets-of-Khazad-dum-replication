#include "MorPlatformUiManager.h"

UMorPlatformUiManager::UMorPlatformUiManager() {
    this->ConfigAsyncLoadDelay = 5.00f;
    this->PlatformUiConfig = NULL;
}

UMorPlatformUiConfig* UMorPlatformUiManager::GetUiConfig() {
    return NULL;
}

UMorPlatformUiConfig* UMorPlatformUiManager::GetPlatformUiConfig(const UObject* WorldContext) {
    return NULL;
}

UMorPlatformUiManager* UMorPlatformUiManager::Get(const UObject* WorldContext) {
    return NULL;
}


