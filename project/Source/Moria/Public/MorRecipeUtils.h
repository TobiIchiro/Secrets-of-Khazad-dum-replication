#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGKInventoryPredicate.h"
#include "MorAnyItemRowHandle.h"
#include "MorConstructionDefinition.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorConstructionRowHandle.h"
#include "MorItemDefinition.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeRowHandle.h"
#include "MorRequiredRecipeMaterial.h"
#include "MorRuneDefinition.h"
#include "MorRecipeUtils.generated.h"

class AActor;
class AMorCharacter;
class AMorCraftingStation;
class UInventoryComponent;
class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorRecipeUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorRecipeUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateCosmeticsData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValidCosmeticConversion(const UObject* WorldContextObject, const FMorItemDefinition& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCosmeticUnlockedForPlayer(const UObject* WorldContextObject, const FMorItemDefinition& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCosmeticPremiumCategory(const UObject* WorldContextObject, const FMorItemDefinition& Item);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRuneRecipeRequiredMaterials(const UObject* WorldContextObject, const FMorRuneDefinition& Recipe, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRuneRecipeRequiredConstructions(const UObject* WorldContextObject, const FMorRuneDefinition& Recipe, TArray<FMorConstructionRowHandle>& OutRequiredConstructions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetRuneRecipeNumFragments(const UObject* WorldContextObject, const FMorRuneDefinition& Recipe);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRecipeRequiredMaterialCounts(const UObject* WorldContextObject, const FMorItemRecipeDefinition& ItemRecipeDefinition, int32& OutCurrent, int32& OutTotal, const FFGKInventoryPredicate& Predicate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRecipeRequiredConstructionCounts(const AActor* CraftingStation, const FMorItemRecipeDefinition& ItemRecipeDefinition, int32& OutCurrent, int32& OutTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRecipeForConstruction(const FMorConstructionDefinition& Definition, bool& bOutFound, FMorConstructionRecipeDefinition& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPremiumCosmetics(TArray<FMorItemDefinition>& OutCosmetics, const UObject* WorldContextObject, bool bOnlyUsable);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetItemRecipeRequiredMaterials(const UObject* WorldContextObject, const FMorItemRecipeDefinition& Recipe, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetItemRecipeRequiredConstructions(const UObject* WorldContextObject, const FMorItemRecipeDefinition& Recipe, TArray<FMorConstructionRowHandle>& OutRequiredConstructions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetItemRecipeNumFragments(const UObject* WorldContextObject, const FMorItemRecipeDefinition& Recipe);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventoryCounts_RowHandle(const UObject* WorldContextObject, const FMorAnyItemRowHandle& ItemHandle, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate, AActor* PlayerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventoryCounts_ItemRecipeHandle(const UObject* WorldContextObject, const FMorItemRecipeRowHandle& ItemRecipeHandle, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventoryCounts_ItemRecipeDefinition(const UObject* WorldContextObject, const FMorItemRecipeDefinition& ItemRecipeDefinition, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetInventoryCounts_Definition(const UObject* WorldContextObject, const FMorItemDefinition& ItemDefinition, int32& OutPlayerInventoryCount, int32& OutBaseInventoryCount, const FFGKInventoryPredicate& Predicate, AActor* PlayerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCosmetics(TArray<FMorItemDefinition>& OutCosmetics, const UObject* WorldContextObject, AMorCharacter* Dwarf, bool bIncludeUnlockable, bool bIncludeUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCosmeticConversionRequiredMaterials(const UObject* WorldContextObject, const FMorItemDefinition& Item, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials, bool& bOutValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCosmeticConversionMaterialCounts(const UObject* WorldContextObject, const FMorItemDefinition& ItemDefinition, int32& OutCurrent, int32& OutTotal, const FFGKInventoryPredicate& Predicate);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetConstructionRecipeRequiredMaterials(const UObject* WorldContextObject, const FMorConstructionRecipeDefinition& Recipe, TArray<FMorRequiredRecipeMaterial>& OutRequiredMaterials);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetConstructionRecipeRequiredConstructions(const UObject* WorldContextObject, const FMorConstructionRecipeDefinition& Recipe, TArray<FMorConstructionRowHandle>& OutRequiredConstructions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetConstructionRecipeNumFragments(const UObject* WorldContextObject, const FMorConstructionRecipeDefinition& Recipe);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetBaseInventories(const UObject* WorldContextObject, TArray<UInventoryComponent*>& OutInventories, const FFGKInventoryPredicate& Predicate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanPinRecipe(const AMorCraftingStation* CraftingStation, const FMorItemRecipeRowHandle& ItemRecipeHandle);
    
};

