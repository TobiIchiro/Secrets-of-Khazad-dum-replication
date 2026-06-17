#pragma once
#include "CoreMinimal.h"
#include "EFGKGetDefinitionResult.h"
#include "FGKStaticDataFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "LandmarkDefinition.h"
#include "MorAIPopulationDefinition.h"
#include "MorAIPopulationRowHandle.h"
#include "MorAnyItemRowHandle.h"
#include "MorArmorDefinition.h"
#include "MorArmorRowHandle.h"
#include "MorBrewDefinition.h"
#include "MorBrewRowHandle.h"
#include "MorCategoryTagDefinition.h"
#include "MorCategoryTagRowHandle.h"
#include "MorChapterDefinition.h"
#include "MorChapterRowHandle.h"
#include "MorConstructionDefinition.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorConstructionRecipeRowHandle.h"
#include "MorConstructionRowHandle.h"
#include "MorConsumableDefinition.h"
#include "MorConsumableRowHandle.h"
#include "MorContainerItemDefinition.h"
#include "MorContainerItemRowHandle.h"
#include "MorCurrencyDefinition.h"
#include "MorCurrencyRowHandle.h"
#include "MorDamageModifierDefinition.h"
#include "MorDamageModifierRowHandle.h"
#include "MorDifficultySliderDefinition.h"
#include "MorDifficultySliderRowHandle.h"
#include "MorEpicPackDefinition.h"
#include "MorEpicPackRowHandle.h"
#include "MorExpeditionDifficultyDefinition.h"
#include "MorExpeditionDifficultyRowHandle.h"
#include "MorExpeditionModifierDefinition.h"
#include "MorExpeditionModifierRowHandle.h"
#include "MorFloraReceptacleDefinition.h"
#include "MorFloraReceptacleRowHandle.h"
#include "MorFuelDefinition.h"
#include "MorFuelRowHandle.h"
#include "MorItemDefinition.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeRowHandle.h"
#include "MorItemRowHandle.h"
#include "MorItemSetDefinition.h"
#include "MorItemSetRowHandle.h"
#include "MorItemTintDefinition.h"
#include "MorItemTintRowHandle.h"
#include "MorLandmarkRowHandle.h"
#include "MorLoreDefinition.h"
#include "MorLoreRowHandle.h"
#include "MorMerchantDefinition.h"
#include "MorMerchantRowHandle.h"
#include "MorOrcTrapDefinition.h"
#include "MorOrcTrapRowHandle.h"
#include "MorOreDefinition.h"
#include "MorOreRowHandle.h"
#include "MorRecipeBundleDefinition.h"
#include "MorRecipeBundleRowHandle.h"
#include "MorRecipeFragmentDefinition.h"
#include "MorRecipeFragmentRowHandle.h"
#include "MorRuneDefinition.h"
#include "MorRuneRowHandle.h"
#include "MorThresholdEffectDefinition.h"
#include "MorThresholdEffectRowHandle.h"
#include "MorThrowLightDefinition.h"
#include "MorThrowLightRowHandle.h"
#include "MorTipDefinition.h"
#include "MorTipRowHandle.h"
#include "MorToolDefinition.h"
#include "MorToolRowHandle.h"
#include "MorTutorialDefinition.h"
#include "MorTutorialRowHandle.h"
#include "MorWaypointDefinition.h"
#include "MorWaypointRowHandle.h"
#include "MorWeaponDefinition.h"
#include "MorWeaponRowHandle.h"
#include "MorZoneRowHandle.h"
#include "ZoneDefinition.h"
#include "MorStaticDataFunctionLibrary.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class MORIA_API UMorStaticDataFunctionLibrary : public UFGKStaticDataFunctionLibrary {
    GENERATED_BODY()
public:
    UMorStaticDataFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition WeaponToItemDefinition(const FMorWeaponDefinition& WeaponDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorZoneRowHandle ToZoneRowHandle(const FZoneDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorWaypointRowHandle ToWaypointRowHandle(const FMorWaypointDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorTutorialRowHandle ToTutorialRowHandle(const FMorTutorialDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorTipRowHandle ToTipRowHandle(const FMorTipDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorLoreRowHandle ToLoreRowHandle(const FMorLoreDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorLandmarkRowHandle ToLandmarkRowHandle(const FLandmarkDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorItemRecipeRowHandle ToItemRecipeRowHandle(const FMorItemRecipeDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorFuelRowHandle ToFuelRowHandle(const FMorFuelDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorConstructionRowHandle ToConstructionRowHandle(const FMorConstructionDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorConstructionRecipeRowHandle ToConstructionRecipeRowHandle(const FMorConstructionRecipeDefinition& Definition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorCategoryTagRowHandle ToCategoryTagRowHandle(const FMorCategoryTagDefinition& Definition);
    
    UFUNCTION(BlueprintCallable)
    static void SortCategoryTags(UPARAM(Ref) TArray<FMorCategoryTagDefinition>& Array);
    
    UFUNCTION(BlueprintCallable)
    static FZoneDefinition GetZoneDefinition(const FMorZoneRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorWeaponDefinition GetWeaponDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorWeaponDefinition GetWeaponDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorWeaponDefinition GetWeaponDefinition(const FMorWeaponRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorWaypointDefinition GetWaypointDefinition(const FMorWaypointRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorTutorialDefinition GetTutorialDefinition(const FMorTutorialRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorToolDefinition GetToolDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorToolDefinition GetToolDefinition(const FMorToolRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetTipRowNameFromHandle(const FMorTipRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static FMorTipDefinition GetTipDefinition(const FMorTipRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorThrowLightDefinition GetThrowLightDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorThrowLightDefinition GetThrowLightDefinition(const FMorThrowLightRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorThresholdEffectDefinition GetThresholdEffectsDefinition(const FMorThresholdEffectRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorRuneDefinition GetRuneDefinition(const FMorRuneRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorRecipeFragmentDefinition GetRecipeFragmentDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorRecipeFragmentDefinition GetRecipeFragmentDefinition(const FMorRecipeFragmentRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorRecipeBundleDefinition GetRecipeBundleDefinition(const FMorRecipeBundleRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorOreDefinition GetOreDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorOreDefinition GetOreDefinition(const FMorOreRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorOrcTrapDefinition GetOrcTrapDefinition(const FMorOrcTrapRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorMerchantDefinition GetMerchantDefinition(const FMorMerchantRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorLoreDefinition GetLoreDefinition(const FMorLoreRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FLandmarkDefinition GetLandmarkDefinition(const FMorLandmarkRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemTintRowHandle GetItemTintRowHandle(const FMorItemTintDefinition& TintDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemTintDefinition GetItemTintDefinition(const FMorItemTintRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemSetDefinition GetItemSetDefinition(const FMorItemSetRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemRecipeDefinition GetItemRecipeDefinition(const FMorItemRecipeRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition GetItemDefinitionFromActor(const AInventoryItem* Item, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition GetItemDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition GetItemDefinition(const FMorItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFuelDisplayName(const FMorFuelRowHandle& RowHandle);
    
    UFUNCTION(BlueprintCallable)
    static FMorFuelDefinition GetFuelDefinition(const FMorFuelRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorFloraReceptacleDefinition GetFloraDefinition(const FMorFloraReceptacleRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorExpeditionModifierDefinition GetExpeditionModifierDefinition(const FMorExpeditionModifierRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorExpeditionDifficultyDefinition GetExpeditionDifficultyDefinition(const FMorExpeditionDifficultyRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorEpicPackDefinition GetEpicPackDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorEpicPackDefinition GetEpicPackDefinition(const FMorEpicPackRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorDifficultySliderDefinition GetDifficultySliderDefinition(const FMorDifficultySliderRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorDamageModifierDefinition GetDamageModifierDefinition(const FMorDamageModifierRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorCurrencyDefinition GetCurrencyDefinition(const FMorCurrencyRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorContainerItemDefinition GetContainerItemDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorContainerItemDefinition GetContainerItemDefinition(const FMorContainerItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorConsumableDefinition GetConsumableDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorConsumableDefinition GetConsumableDefinition(const FMorConsumableRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorConstructionRecipeDefinition GetConstructionRecipeDefinition(const FMorConstructionRecipeRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorConstructionDefinition GetConstructionDefinitionFromRecipeHandle(const FMorConstructionRecipeRowHandle& RecipeHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorConstructionDefinition GetConstructionDefinitionFromRecipe(const FMorConstructionRecipeDefinition& RecipeDefinition, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorConstructionDefinition GetConstructionDefinition(const FMorConstructionRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorChapterDefinition GetChapterDefinition(const FMorChapterRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorCategoryTagDefinition GetCategoryTagDefinition(const FMorCategoryTagRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorCategoryTagDefinition GetCategoryForTag(const FGameplayTag& Tag, EFGKGetDefinitionResult& OutResult, const bool bCheckParents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMorCategoryTagDefinition> GetCategoriesForTags(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable)
    static FMorBrewDefinition GetBrewDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorBrewDefinition GetBrewDefinition(const FMorBrewRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorArmorDefinition GetArmorDefinitionFromAnyItem(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorArmorDefinition GetArmorDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorArmorDefinition GetArmorDefinition(const FMorArmorRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition GetAnyItemDefinitionByName(const FName& RowName, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition GetAnyItemDefinition(const FMorAnyItemRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorAIPopulationDefinition GetAiPopulationDefinition(const FMorAIPopulationRowHandle& RowHandle, EFGKGetDefinitionResult& OutResult);
    
    UFUNCTION(BlueprintCallable)
    static FMorItemDefinition ArmorToItemDefinition(const FMorArmorDefinition& ArmorDefinition);
    
};

