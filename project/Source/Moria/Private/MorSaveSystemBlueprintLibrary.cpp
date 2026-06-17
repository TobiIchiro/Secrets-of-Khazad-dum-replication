#include "MorSaveSystemBlueprintLibrary.h"

UMorSaveSystemBlueprintLibrary::UMorSaveSystemBlueprintLibrary() {
}

void UMorSaveSystemBlueprintLibrary::SaveGameToFile(const FString& SlotName) {
}

FMorSaveDataRuntimeActorRecordHandle UMorSaveSystemBlueprintLibrary::MakeRuntimeActorRecordHandle() {
    return FMorSaveDataRuntimeActorRecordHandle{};
}

bool UMorSaveSystemBlueprintLibrary::IsValidRuntimeActorRecordHandle(const FMorSaveDataRuntimeActorRecordHandle& Handle) {
    return false;
}

bool UMorSaveSystemBlueprintLibrary::IsSaveSystemWorldStateValid() {
    return false;
}

AMorSaveSystemWorldState* UMorSaveSystemBlueprintLibrary::GetSaveSystemWorldState() {
    return NULL;
}

AMorSaveSystemWorldState* UMorSaveSystemBlueprintLibrary::GetSaveGameStatus(EMorSaveGameStatus& OutStatus) {
    return NULL;
}

FMorSaveGameObjectId UMorSaveSystemBlueprintLibrary::CreatePersistentSaveGameObjectId() {
    return FMorSaveGameObjectId{};
}


