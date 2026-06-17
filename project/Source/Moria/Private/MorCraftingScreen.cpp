#include "MorCraftingScreen.h"
#include "Templates/SubclassOf.h"

UMorCraftingScreen::UMorCraftingScreen() {
    this->Crafter = NULL;
    this->CraftingComponent = NULL;
    this->CraftingStation = NULL;
}

void UMorCraftingScreen::StartCraft(const FMorItemRecipeDefinition& Recipe) {
}

void UMorCraftingScreen::SetRecipeViewed(const FMorItemRecipeDefinition& Recipe) {
}










bool UMorCraftingScreen::IsRecipeViewed(const FMorItemRecipeDefinition& Recipe) const {
    return false;
}

bool UMorCraftingScreen::IsRecipeKnown(const FMorItemRecipeDefinition& Recipe) const {
    return false;
}

bool UMorCraftingScreen::IsCrafting() const {
    return false;
}

bool UMorCraftingScreen::HasRequiredConstructions(const FMorItemRecipeDefinition& Recipe) const {
    return false;
}

void UMorCraftingScreen::HandleRecipeStartFailedEvent(const FMorItemRecipeRowHandle RecipeHandle, const TArray<ECraftFailureReason> FailReasons) {
}

void UMorCraftingScreen::HandleRecipeStartedEvent(const FMorItemRecipeRowHandle RecipeHandle) {
}

void UMorCraftingScreen::HandleRecipeQueuedEvent(const FMorItemRecipeRowHandle RecipeHandle) {
}

void UMorCraftingScreen::HandleRecipeFinishedEvent(const FMorItemRecipeRowHandle RecipeHandle, bool bAllCraftingFinished) {
}

void UMorCraftingScreen::HandleCraftingResumedEvent(const FMorItemRecipeRowHandle RecipeHandle) {
}

void UMorCraftingScreen::HandleCraftingPausedEvent() {
}

void UMorCraftingScreen::HandleCraftingCanceledEvent() {
}

void UMorCraftingScreen::HandleCrafterInventoryOnItemRemoved(TSubclassOf<AInventoryItem> ItemClass, int32 AmountRemoved, int32 NewTotalCount) {
}

void UMorCraftingScreen::HandleCrafterInventoryOnItemAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> ItemClass, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded) {
}

void UMorCraftingScreen::HandleCrafterInventoryOnChanged(const FItemHandle& Item) {
}

void UMorCraftingScreen::GetRecipeViewedCountForCategory(const FMorCategoryTagDefinition& Category, int32& OutViewedCount, int32& OutNewCount, int32& OutTotalCount) const {
}

TArray<FMorItemRecipeDefinition> UMorCraftingScreen::GetRecipesForCategory(const FMorCategoryTagDefinition& Category) const {
    return TArray<FMorItemRecipeDefinition>();
}

FMorItemRecipeDefinition UMorCraftingScreen::GetRecipeInProgress() const {
    return FMorItemRecipeDefinition{};
}

EMorRecipeDiscoveryState UMorCraftingScreen::GetRecipeDiscoveryState(const FMorItemRecipeDefinition& Recipe) const {
    return EMorRecipeDiscoveryState::None;
}

void UMorCraftingScreen::GetRecipeDiscoveryProgress(const FMorItemRecipeDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const {
}

TArray<FMorConstructionRowHandle> UMorCraftingScreen::GetMissingConstructions(const FMorItemRecipeDefinition& Recipe) const {
    return TArray<FMorConstructionRowHandle>();
}

TArray<FMorCategoryTagDefinition> UMorCraftingScreen::GetGroupByCategories() const {
    return TArray<FMorCategoryTagDefinition>();
}

void UMorCraftingScreen::GetCraftProgress(float& OutPctProgress, float& OutTimeRemaining) const {
}

ECraftingType UMorCraftingScreen::GetCraftingType() const {
    return ECraftingType::Instant;
}

void UMorCraftingScreen::CategorizeRecipes(const FGameplayTag& FilterTag, const FGameplayTag& GroupByTag, const bool bStationOnly, const int32 FilterDiscoveryState) {
}

void UMorCraftingScreen::CanCraft(const FMorItemRecipeDefinition& Recipe, bool& OutCanCraft, TArray<ECraftFailureReason>& OutReasons) const {
}


