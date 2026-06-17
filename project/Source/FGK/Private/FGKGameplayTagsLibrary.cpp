#include "FGKGameplayTagsLibrary.h"

UFGKGameplayTagsLibrary::UFGKGameplayTagsLibrary() {
}

FGameplayTag UFGKGameplayTagsLibrary::GetTagFromString(const FString& String, EFGKGetTagResult& OutResult) {
    return FGameplayTag{};
}

FGameplayTag UFGKGameplayTagsLibrary::GetTagFromName(const FName Name, EFGKGetTagResult& OutResult) {
    return FGameplayTag{};
}

FGameplayTagContainer UFGKGameplayTagsLibrary::GetGameplayTagChildren(const FGameplayTag& GameplayTag, const bool bImmediateChildrenOnly) {
    return FGameplayTagContainer{};
}

FGameplayTag UFGKGameplayTagsLibrary::GetFirstTagWithParent(const FGameplayTagContainer& TagContainer, const FGameplayTag ParentTag, EFGKGetTagResult& OutResult) {
    return FGameplayTag{};
}


