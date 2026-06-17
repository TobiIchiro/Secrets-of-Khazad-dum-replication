#include "FGKBlueprintLibrary.h"

UFGKBlueprintLibrary::UFGKBlueprintLibrary() {
}

void UFGKBlueprintLibrary::RemoveGameplayTags(AFGKBaseCharacter* Character, const FGameplayTagContainer& GameplayTags) {
}

bool UFGKBlueprintLibrary::IsPackageDirty(UObject* InObject) {
    return false;
}

bool UFGKBlueprintLibrary::IsInEditor() {
    return false;
}

AFGKBaseCharacter* UFGKBlueprintLibrary::GetLocallyControlledPlayerCharacter(UObject* WorldContext) {
    return NULL;
}

AFGKPlayerController* UFGKBlueprintLibrary::GetLocallyControlledPlayer(UObject* WorldContext) {
    return NULL;
}

FString UFGKBlueprintLibrary::GetCommand_TeleportToBookmark() {
    return TEXT("");
}

void UFGKBlueprintLibrary::AddGameplayTags(AFGKBaseCharacter* Character, const FGameplayTagContainer& GameplayTags) {
}


