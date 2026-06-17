#include "MorLoreScreen.h"

UMorLoreScreen::UMorLoreScreen() {
    this->Character = NULL;
}

void UMorLoreScreen::SetTutorialEntryViewed(const FMorTutorialDefinition& TutorialEntry) {
}

void UMorLoreScreen::SetTutorialEntrySelected(const FMorTutorialDefinition& TutorialEntry) {
}

void UMorLoreScreen::SetTipEntryViewed(const FMorTipDefinition& TipEntry) {
}

void UMorLoreScreen::SetLoreEntryViewed(const FMorLoreDefinition& LoreEntry) {
}

bool UMorLoreScreen::IsTutorialEntryViewed(const FMorTutorialDefinition& TutorialEntry) const {
    return false;
}

bool UMorLoreScreen::IsTipEntryViewed(const FMorTipDefinition& TipEntry) const {
    return false;
}

bool UMorLoreScreen::IsLoreEntryViewed(const FMorLoreDefinition& LoreEntry) const {
    return false;
}

TArray<FMorLoreDefinition> UMorLoreScreen::GetLoreEntriesForCategory(const FMorCategoryTagDefinition& Category) const {
    return TArray<FMorLoreDefinition>();
}

TArray<FMorCategoryTagDefinition> UMorLoreScreen::GetGroupByCategories() const {
    return TArray<FMorCategoryTagDefinition>();
}


void UMorLoreScreen::CategorizeLoreEntries(const FGameplayTag& FilterTag, const FGameplayTag& GroupByTag) {
}


