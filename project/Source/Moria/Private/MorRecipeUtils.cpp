#include "MorRecipeUtils.h"

UMorRecipeUtils::UMorRecipeUtils() {
}

void UMorRecipeUtils::UpdateCosmeticsData(const UObject* WorldContextObject) {
}

bool UMorRecipeUtils::IsValidCosmeticConversion(const UObject* WorldContextObject, const FMorItemDefinition& Item) {
    return false;
}

bool UMorRecipeUtils::IsCosmeticUnlockedForPlayer(const UObject* WorldContextObject, const FMorItemDefinition& Item) {
    return false;
}

bool UMorRecipeUtils::IsCosmeticPremiumCategory(const UObject* WorldContextObject, const FMorItemDefinition& Item) {
    return false;
}

void UMorRecipeUtils::GetRuneRecipeRequiredMaterials(const UObject* WorldContextObject, const FMorRuneDefinition& Recipe, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials) {
}

void UMorRecipeUtils::GetRuneRecipeRequiredConstructions(const UObject* WorldContextObject, const FMorRuneDefinition& Recipe, TArray<FMorConstructionRowHandle>& OutRequiredConstructions) {
}

int32 UMorRecipeUtils::GetRuneRecipeNumFragments(const UObject* WorldContextObject, const FMorRuneDefinition& Recipe) {
    return 0;
}

void UMorRecipeUtils::GetRecipeRequiredMaterialCounts(const UObject* WorldContextObject, const FMorItemRecipeDefinition& ItemRecipeDefinition, int32& OutCurrent, int32& OutTotal, const FFGKInventoryPredicate& Predicate) {
}

void UMorRecipeUtils::GetRecipeRequiredConstructionCounts(const AActor* CraftingStation, const FMorItemRecipeDefinition& ItemRecipeDefinition, int32& OutCurrent, int32& OutTotal) {
}

void UMorRecipeUtils::GetRecipeForConstruction(const FMorConstructionDefinition& Definition, bool& bOutFound, FMorConstructionRecipeDefinition& Result) {
}

void UMorRecipeUtils::GetPremiumCosmetics(TArray<FMorItemDefinition>& OutCosmetics, const UObject* WorldContextObject, bool bOnlyUsable) {
}

void UMorRecipeUtils::GetItemRecipeRequiredMaterials(const UObject* WorldContextObject, const FMorItemRecipeDefinition& Recipe, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials) {
}

void UMorRecipeUtils::GetItemRecipeRequiredConstructions(const UObject* WorldContextObject, const FMorItemRecipeDefinition& Recipe, TArray<FMorConstructionRowHandle>& OutRequiredConstructions) {
}

int32 UMorRecipeUtils::GetItemRecipeNumFragments(const UObject* WorldContextObject, const FMorItemRecipeDefinition& Recipe) {
    return 0;
}

void UMorRecipeUtils::GetInventoryCounts_RowHandle(const UObject* WorldContextObject, const FMorAnyItemRowHandle& ItemHandle, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate, AActor* PlayerActor) {
}

void UMorRecipeUtils::GetInventoryCounts_ItemRecipeHandle(const UObject* WorldContextObject, const FMorItemRecipeRowHandle& ItemRecipeHandle, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate) {
}

void UMorRecipeUtils::GetInventoryCounts_ItemRecipeDefinition(const UObject* WorldContextObject, const FMorItemRecipeDefinition& ItemRecipeDefinition, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate) {
}

void UMorRecipeUtils::GetInventoryCounts_Definition(const UObject* WorldContextObject, const FMorItemDefinition& ItemDefinition, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate, AActor* PlayerActor) {
}

void UMorRecipeUtils::GetCosmetics(TArray<FMorItemDefinition>& OutCosmetics, const UObject* WorldContextObject, AMorCharacter* Dwarf, bool bIncludeUnlockable, bool bIncludeUnlocked) {
}

void UMorRecipeUtils::GetCosmeticConversionRequiredMaterials(const UObject* WorldContextObject, const FMorItemDefinition& Item, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials, bool& bOutValid) {
}

void UMorRecipeUtils::GetCosmeticConversionMaterialCounts(const UObject* WorldContextObject, const FMorItemDefinition& ItemDefinition, int32& OutCurrent, int32& OutTotal, const FFGKInventoryPredicate& Predicate) {
}

void UMorRecipeUtils::GetConstructionRecipeRequiredMaterials(const UObject* WorldContextObject, const FMorConstructionRecipeDefinition& Recipe, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials) {
}

void UMorRecipeUtils::GetConstructionRecipeRequiredConstructions(const UObject* WorldContextObject, const FMorConstructionRecipeDefinition& Recipe, TArray<FMorConstructionRowHandle>& OutRequiredConstructions) {
}

int32 UMorRecipeUtils::GetConstructionRecipeNumFragments(const UObject* WorldContextObject, const FMorConstructionRecipeDefinition& Recipe) {
    return 0;
}

void UMorRecipeUtils::GetBaseInventories(const UObject* WorldContextObject, TArray<UInventoryComponent*>& OutInventories, const FFGKInventoryPredicate& Predicate) {
}

bool UMorRecipeUtils::CanPinRecipe(const AMorCraftingStation* CraftingStation, const FMorItemRecipeRowHandle& ItemRecipeHandle) {
    return false;
}


