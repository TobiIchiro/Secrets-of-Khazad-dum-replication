#include "MorSaveSystemLevelRecordRuntime.h"

UMorSaveSystemLevelRecordRuntime::UMorSaveSystemLevelRecordRuntime() {
    this->ActorSpawner = NULL;
    this->StagingActor = NULL;
    this->FallbackContainer = NULL;
}

void UMorSaveSystemLevelRecordRuntime::OnSaveSystemWorldStateIsReady() {
}

void UMorSaveSystemLevelRecordRuntime::OnLevelUnloaded() {
}

void UMorSaveSystemLevelRecordRuntime::OnLevelShown() {
}

void UMorSaveSystemLevelRecordRuntime::OnLevelLoaded() {
}

void UMorSaveSystemLevelRecordRuntime::OnLevelHidden() {
}


