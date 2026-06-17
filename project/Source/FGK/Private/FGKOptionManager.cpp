#include "FGKOptionManager.h"

UFGKOptionManager::UFGKOptionManager() {
    this->OptionData = NULL;
    this->Settings = NULL;
}

void UFGKOptionManager::SaveSync(bool bPopContextOnSuccess) {
}

void UFGKOptionManager::Save(bool bPopContextOnSuccess) {
}

void UFGKOptionManager::PushContext() {
}

void UFGKOptionManager::PopContext(bool bRevertValues) {
}

void UFGKOptionManager::LoadSync() {
}

void UFGKOptionManager::Load() {
}

TArray<FString> UFGKOptionManager::GetResolutions() const {
    return TArray<FString>();
}

UFGKOption* UFGKOptionManager::GetOption(FName OptionId) const {
    return NULL;
}


