#include "MorStaticDataFunctionLibrary.h"

UMorStaticDataFunctionLibrary::UMorStaticDataFunctionLibrary() {
}

FMorItemDefinition UMorStaticDataFunctionLibrary::WeaponToItemDefinition(const FMorWeaponDefinition& WeaponDefinition) {
    return FMorItemDefinition{};
}

FMorZoneRowHandle UMorStaticDataFunctionLibrary::ToZoneRowHandle(const FZoneDefinition& Definition) {
    return FMorZoneRowHandle{};
}

FMorWaypointRowHandle UMorStaticDataFunctionLibrary::ToWaypointRowHandle(const FMorWaypointDefinition& Definition) {
    return FMorWaypointRowHandle{};
}

FMorTutorialRowHandle UMorStaticDataFunctionLibrary::ToTutorialRowHandle(const FMorTutorialDefinition& Definition) {
    return FMorTutorialRowHandle{};
}

FMorTipRowHandle UMorStaticDataFunctionLibrary::ToTipRowHandle(const FMorTipDefinition& Definition) {
    return FMorTipRowHandle{};
}

FMorLoreRowHandle UMorStaticDataFunctionLibrary::ToLoreRowHandle(const FMorLoreDefinition& Definition) {
    return FMorLoreRowHandle{};
}

FMorLandmarkRowHandle UMorStaticDataFunctionLibrary::ToLandmarkRowHandle(const FLandmarkDefinition& Definition) {
    return FMorLandmarkRowHandle{};
}

FMorItemRecipeRowHandle UMorStaticDataFunctionLibrary::ToItemRecipeRowHandle(const FMorItemRecipeDefinition& Definition) {
    return FMorItemRecipeRowHandle{};
}

FMorFuelRowHandle UMorStaticDataFunctionLibrary::ToFuelRowHandle(const FMorFuelDefinition& Definition) {
    return FMorFuelRowHandle{};
}

FMorConstructionRowHandle UMorStaticDataFunctionLibrary::ToConstructionRowHandle(const FMorConstructionDefinition& Definition) {
    return FMorConstructionRowHandle{};
}

FMorConstructionRecipeRowHandle UMorStaticDataFunctionLibrary::ToConstructionRecipeRowHandle(const FMorConstructionRecipeDefinition& Definition) {
    return FMorConstructionRecipeRowHandle{};
}

FMorCategoryTagRowHandle UMorStaticDataFunctionLibrary::ToCategoryTagRowHandle(const FMorCategoryTagDefinition& Definition) {
    return FMorCategoryTagRowHandle{};
}

void UMorStaticDataFunctionLibrary::SortCategoryTags(TArray<FMorCategoryTagDefinition>& Array) {
}

FZoneDefinition UMorStaticDataFunctionLibrary::GetZoneDefinition(const FMorZoneRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FZoneDefinition{};
}

FMorWeaponDefinition UMorStaticDataFunctionLibrary::GetWeaponDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorWeaponDefinition{};
}

FMorWeaponDefinition UMorStaticDataFunctionLibrary::GetWeaponDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult) {
    return FMorWeaponDefinition{};
}

FMorWeaponDefinition UMorStaticDataFunctionLibrary::GetWeaponDefinition(const FMorWeaponRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorWeaponDefinition{};
}

FMorWaypointDefinition UMorStaticDataFunctionLibrary::GetWaypointDefinition(const FMorWaypointRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorWaypointDefinition{};
}

FMorTutorialDefinition UMorStaticDataFunctionLibrary::GetTutorialDefinition(const FMorTutorialRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorTutorialDefinition{};
}

FMorToolDefinition UMorStaticDataFunctionLibrary::GetToolDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorToolDefinition{};
}

FMorToolDefinition UMorStaticDataFunctionLibrary::GetToolDefinition(const FMorToolRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorToolDefinition{};
}

FName UMorStaticDataFunctionLibrary::GetTipRowNameFromHandle(const FMorTipRowHandle& RowHandle) {
    return NAME_None;
}

FMorTipDefinition UMorStaticDataFunctionLibrary::GetTipDefinition(const FMorTipRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorTipDefinition{};
}

FMorThrowLightDefinition UMorStaticDataFunctionLibrary::GetThrowLightDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorThrowLightDefinition{};
}

FMorThrowLightDefinition UMorStaticDataFunctionLibrary::GetThrowLightDefinition(const FMorThrowLightRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorThrowLightDefinition{};
}

FMorThresholdEffectDefinition UMorStaticDataFunctionLibrary::GetThresholdEffectsDefinition(const FMorThresholdEffectRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorThresholdEffectDefinition{};
}

FMorRuneDefinition UMorStaticDataFunctionLibrary::GetRuneDefinition(const FMorRuneRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorRuneDefinition{};
}

FMorRecipeFragmentDefinition UMorStaticDataFunctionLibrary::GetRecipeFragmentDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorRecipeFragmentDefinition{};
}

FMorRecipeFragmentDefinition UMorStaticDataFunctionLibrary::GetRecipeFragmentDefinition(const FMorRecipeFragmentRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorRecipeFragmentDefinition{};
}

FMorRecipeBundleDefinition UMorStaticDataFunctionLibrary::GetRecipeBundleDefinition(const FMorRecipeBundleRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorRecipeBundleDefinition{};
}

FMorOreDefinition UMorStaticDataFunctionLibrary::GetOreDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorOreDefinition{};
}

FMorOreDefinition UMorStaticDataFunctionLibrary::GetOreDefinition(const FMorOreRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorOreDefinition{};
}

FMorOrcTrapDefinition UMorStaticDataFunctionLibrary::GetOrcTrapDefinition(const FMorOrcTrapRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorOrcTrapDefinition{};
}

FMorMerchantDefinition UMorStaticDataFunctionLibrary::GetMerchantDefinition(const FMorMerchantRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorMerchantDefinition{};
}

FMorLoreDefinition UMorStaticDataFunctionLibrary::GetLoreDefinition(const FMorLoreRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorLoreDefinition{};
}

FLandmarkDefinition UMorStaticDataFunctionLibrary::GetLandmarkDefinition(const FMorLandmarkRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FLandmarkDefinition{};
}

FMorItemTintRowHandle UMorStaticDataFunctionLibrary::GetItemTintRowHandle(const FMorItemTintDefinition& TintDefinition) {
    return FMorItemTintRowHandle{};
}

FMorItemTintDefinition UMorStaticDataFunctionLibrary::GetItemTintDefinition(const FMorItemTintRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorItemTintDefinition{};
}

FMorItemSetDefinition UMorStaticDataFunctionLibrary::GetItemSetDefinition(const FMorItemSetRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorItemSetDefinition{};
}

FMorItemRecipeDefinition UMorStaticDataFunctionLibrary::GetItemRecipeDefinition(const FMorItemRecipeRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorItemRecipeDefinition{};
}

FMorItemDefinition UMorStaticDataFunctionLibrary::GetItemDefinitionFromActor(const AInventoryItem* Item, EFGKGetDefinitionResult& OutResult) {
    return FMorItemDefinition{};
}

FMorItemDefinition UMorStaticDataFunctionLibrary::GetItemDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult) {
    return FMorItemDefinition{};
}

FMorItemDefinition UMorStaticDataFunctionLibrary::GetItemDefinition(const FMorItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorItemDefinition{};
}

FText UMorStaticDataFunctionLibrary::GetFuelDisplayName(const FMorFuelRowHandle& RowHandle) {
    return FText::GetEmpty();
}

FMorFuelDefinition UMorStaticDataFunctionLibrary::GetFuelDefinition(const FMorFuelRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorFuelDefinition{};
}

FMorFloraReceptacleDefinition UMorStaticDataFunctionLibrary::GetFloraDefinition(const FMorFloraReceptacleRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorFloraReceptacleDefinition{};
}

FMorExpeditionModifierDefinition UMorStaticDataFunctionLibrary::GetExpeditionModifierDefinition(const FMorExpeditionModifierRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorExpeditionModifierDefinition{};
}

FMorExpeditionDifficultyDefinition UMorStaticDataFunctionLibrary::GetExpeditionDifficultyDefinition(const FMorExpeditionDifficultyRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorExpeditionDifficultyDefinition{};
}

FMorEpicPackDefinition UMorStaticDataFunctionLibrary::GetEpicPackDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorEpicPackDefinition{};
}

FMorEpicPackDefinition UMorStaticDataFunctionLibrary::GetEpicPackDefinition(const FMorEpicPackRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorEpicPackDefinition{};
}

FMorDifficultySliderDefinition UMorStaticDataFunctionLibrary::GetDifficultySliderDefinition(const FMorDifficultySliderRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorDifficultySliderDefinition{};
}

FMorDamageModifierDefinition UMorStaticDataFunctionLibrary::GetDamageModifierDefinition(const FMorDamageModifierRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorDamageModifierDefinition{};
}

FMorCurrencyDefinition UMorStaticDataFunctionLibrary::GetCurrencyDefinition(const FMorCurrencyRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorCurrencyDefinition{};
}

FMorContainerItemDefinition UMorStaticDataFunctionLibrary::GetContainerItemDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorContainerItemDefinition{};
}

FMorContainerItemDefinition UMorStaticDataFunctionLibrary::GetContainerItemDefinition(const FMorContainerItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorContainerItemDefinition{};
}

FMorConsumableDefinition UMorStaticDataFunctionLibrary::GetConsumableDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorConsumableDefinition{};
}

FMorConsumableDefinition UMorStaticDataFunctionLibrary::GetConsumableDefinition(const FMorConsumableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorConsumableDefinition{};
}

FMorConstructionRecipeDefinition UMorStaticDataFunctionLibrary::GetConstructionRecipeDefinition(const FMorConstructionRecipeRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorConstructionRecipeDefinition{};
}

FMorConstructionDefinition UMorStaticDataFunctionLibrary::GetConstructionDefinitionFromRecipeHandle(const FMorConstructionRecipeRowHandle& RecipeHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorConstructionDefinition{};
}

FMorConstructionDefinition UMorStaticDataFunctionLibrary::GetConstructionDefinitionFromRecipe(const FMorConstructionRecipeDefinition& RecipeDefinition, EFGKGetDefinitionResult& OutResult) {
    return FMorConstructionDefinition{};
}

FMorConstructionDefinition UMorStaticDataFunctionLibrary::GetConstructionDefinition(const FMorConstructionRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorConstructionDefinition{};
}

FMorChapterDefinition UMorStaticDataFunctionLibrary::GetChapterDefinition(const FMorChapterRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorChapterDefinition{};
}

FMorCategoryTagDefinition UMorStaticDataFunctionLibrary::GetCategoryTagDefinition(const FMorCategoryTagRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorCategoryTagDefinition{};
}

FMorCategoryTagDefinition UMorStaticDataFunctionLibrary::GetCategoryForTag(const FGameplayTag& Tag, EFGKGetDefinitionResult& OutResult, const bool bCheckParents) {
    return FMorCategoryTagDefinition{};
}

TArray<FMorCategoryTagDefinition> UMorStaticDataFunctionLibrary::GetCategoriesForTags(const FGameplayTagContainer& TagContainer) {
    return TArray<FMorCategoryTagDefinition>();
}

FMorBrewDefinition UMorStaticDataFunctionLibrary::GetBrewDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorBrewDefinition{};
}

FMorBrewDefinition UMorStaticDataFunctionLibrary::GetBrewDefinition(const FMorBrewRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorBrewDefinition{};
}

FMorArmorDefinition UMorStaticDataFunctionLibrary::GetArmorDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorArmorDefinition{};
}

FMorArmorDefinition UMorStaticDataFunctionLibrary::GetArmorDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult) {
    return FMorArmorDefinition{};
}

FMorArmorDefinition UMorStaticDataFunctionLibrary::GetArmorDefinition(const FMorArmorRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorArmorDefinition{};
}

FMorItemDefinition UMorStaticDataFunctionLibrary::GetAnyItemDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult) {
    return FMorItemDefinition{};
}

FMorItemDefinition UMorStaticDataFunctionLibrary::GetAnyItemDefinition(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorItemDefinition{};
}

FMorAIPopulationDefinition UMorStaticDataFunctionLibrary::GetAiPopulationDefinition(const FMorAIPopulationRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult) {
    return FMorAIPopulationDefinition{};
}

FMorItemDefinition UMorStaticDataFunctionLibrary::ArmorToItemDefinition(const FMorArmorDefinition& ArmorDefinition) {
    return FMorItemDefinition{};
}


