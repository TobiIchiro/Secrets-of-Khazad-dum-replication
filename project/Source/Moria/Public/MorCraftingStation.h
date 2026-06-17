#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "GameplayTagContainer.h"
#include "CraftingStationEmptiedDelegate.h"
#include "CraftingStationReadyToCollectDelegate.h"
#include "MorConstructionDefinition.h"
#include "MorConstructionRowHandle.h"
#include "MorInteractable.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeRowHandle.h"
#include "OnCraftingStationPinnedRecipeChangedDelegate.h"
#include "MorCraftingStation.generated.h"

class AActor;
class UFGKActorFSMComponent;
class UMorCraftingComponent;
class UMorCraftingScreen;
class UMorInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API AMorCraftingStation : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* CraftingComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingStationReadyToCollect OnItemReadyToCollect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingStationEmptied OnEmptied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRowHandle ConstructionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCraftBasicRecipes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMorCraftingScreen> CraftingScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CraftResults, meta=(AllowPrivateAccess=true))
    TArray<FItemCount> CraftResults;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftingStationPinnedRecipeChanged OnPinnedRecipeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PinnedRecipes, meta=(AllowPrivateAccess=true))
    TArray<FMorItemRecipeRowHandle> PinnedRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPinMultipleRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredNpcRoleTagToShowPinnedRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_NpcFakeCraftRecipe, meta=(AllowPrivateAccess=true))
    FMorItemRecipeRowHandle NpcFakeCraftRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float NpcFakeCraftTimeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 NpcCraftTimeIntervalInGameTime_StartedAt;
    
public:
    AMorCraftingStation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TogglePinnedRecipe(const FMorItemRecipeRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPinnedRecipeUI();
    
    UFUNCTION(BlueprintCallable)
    void SendResultsToCraftReceiverOnBubbleLoad();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestCancelCraft();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PinnedRecipes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NpcFakeCraftRecipe();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftResults();
    
    UFUNCTION(BlueprintCallable)
    void OnRecipeStarted(const FMorItemRecipeRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRecipeFinished(const FMorItemRecipeRowHandle RecipeHandle, bool bAllCraftingFinished);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNpcFakeCraftStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNpcFakeCraftFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCraftingCanceled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPinnedRecipe(const FMorItemRecipeRowHandle RecipeHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemsToCollect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorItemRecipeDefinition GetRecipeInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorItemRecipeRowHandle> GetPinnedRecipes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetFixedDestinationContainer(const FMorItemRecipeDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorConstructionDefinition GetDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemCount> GetCraftResults() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCraftProgress(float& OutPctProgress, float& OutTimeRemaining) const;
    
    UFUNCTION(BlueprintCallable)
    void CollectSingleItem(UMorInventoryComponent* TargetInventory);
    
    UFUNCTION(BlueprintCallable)
    void CollectAllItems(UMorInventoryComponent* TargetInventory);
    
};

