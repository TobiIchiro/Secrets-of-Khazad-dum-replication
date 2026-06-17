#pragma once
#include "CoreMinimal.h"
#include "ECraftFailureReason.h"
#include "ItemHandle.h"
#include "FGKUIScreen.h"
#include "GameplayTagContainer.h"
#include "ECraftingType.h"
#include "EMorRecipeDiscoveryState.h"
#include "MorCategoryTagDefinition.h"
#include "MorConstructionRowHandle.h"
#include "MorCraftingScreenRecipesList.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorCraftingScreen.generated.h"

class AActor;
class AInventoryItem;
class AMorCraftingStation;
class UMorCraftingComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCraftingScreen : public UFGKUIScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootCategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Crafter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* CraftingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCraftingStation* CraftingStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorItemRecipeDefinition> StationRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorItemRecipeDefinition> AllRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCategoryTagDefinition> StationCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCategoryTagDefinition> AllCategories;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMorCategoryTagDefinition, FMorCraftingScreenRecipesList> RecipesByCategory;
    
public:
    UMorCraftingScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void StartCraft(const FMorItemRecipeDefinition& Recipe);
    
    UFUNCTION(BlueprintCallable)
    void SetRecipeViewed(const FMorItemRecipeDefinition& Recipe);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRecipeQueued(const FMorItemRecipeDefinition& Recipe, const float CraftTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftStartFailed(const TArray<ECraftFailureReason>& Reasons);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftingStarted(const FMorItemRecipeDefinition& Recipe, const float CraftTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftingResumed(const FMorItemRecipeDefinition& Recipe, const float TotalCraftTime, const float RemainingTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftingPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftingFinished(const FMorItemRecipeDefinition& Recipe, const bool bAllCraftingFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCraftingCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCrafterInventoryChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeShowWithParams(AMorCraftingStation* CraftingStation_, const TArray<FMorItemRecipeDefinition>& AvailableRecipes_, const TArray<FMorItemRecipeDefinition>& AllRecipes_);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeViewed(const FMorItemRecipeDefinition& Recipe) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeKnown(const FMorItemRecipeDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrafting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredConstructions(const FMorItemRecipeDefinition& Recipe) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRecipeStartFailedEvent(const FMorItemRecipeRowHandle RecipeHandle, const TArray<ECraftFailureReason> FailReasons);
    
    UFUNCTION(BlueprintCallable)
    void HandleRecipeStartedEvent(const FMorItemRecipeRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable)
    void HandleRecipeQueuedEvent(const FMorItemRecipeRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable)
    void HandleRecipeFinishedEvent(const FMorItemRecipeRowHandle RecipeHandle, bool bAllCraftingFinished);
    
    UFUNCTION(BlueprintCallable)
    void HandleCraftingResumedEvent(const FMorItemRecipeRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable)
    void HandleCraftingPausedEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleCraftingCanceledEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleCrafterInventoryOnItemRemoved(TSubclassOf<AInventoryItem> ItemClass, int32 AmountRemoved, int32 NewTotalCount);
    
    UFUNCTION(BlueprintCallable)
    void HandleCrafterInventoryOnItemAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> ItemClass, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded);
    
    UFUNCTION(BlueprintCallable)
    void HandleCrafterInventoryOnChanged(const FItemHandle& Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRecipeViewedCountForCategory(const FMorCategoryTagDefinition& Category, int32& OutViewedCount, int32& OutNewCount, int32& OutTotalCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorItemRecipeDefinition> GetRecipesForCategory(const FMorCategoryTagDefinition& Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorItemRecipeDefinition GetRecipeInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorRecipeDiscoveryState GetRecipeDiscoveryState(const FMorItemRecipeDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRecipeDiscoveryProgress(const FMorItemRecipeDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorConstructionRowHandle> GetMissingConstructions(const FMorItemRecipeDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorCategoryTagDefinition> GetGroupByCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCraftProgress(float& OutPctProgress, float& OutTimeRemaining) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECraftingType GetCraftingType() const;
    
    UFUNCTION(BlueprintCallable)
    void CategorizeRecipes(const FGameplayTag& FilterTag, const FGameplayTag& GroupByTag, const bool bStationOnly, const int32 FilterDiscoveryState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanCraft(const FMorItemRecipeDefinition& Recipe, bool& OutCanCraft, TArray<ECraftFailureReason>& OutReasons) const;
    
};

