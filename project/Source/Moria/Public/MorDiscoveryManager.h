#pragma once
#include "CoreMinimal.h"
#include "EFGKGetDefinitionResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMorRecipeDiscoveryState.h"
#include "MorCategoryTagDefinition.h"
#include "MorConstructionDiscoveredSignatureDelegate.h"
#include "MorConstructionRecipeDefinition.h"
#include "MorConstructionRecipeLearnedSignatureDelegate.h"
#include "MorConstructionRecipePartialProgressChangedSignatureDelegate.h"
#include "MorConstructionRecipeRowHandle.h"
#include "MorDataViewedSignatureDelegate.h"
#include "MorDiscoveredConstructionsArray.h"
#include "MorDiscoveredExpeditionModifiersArray.h"
#include "MorDiscoveredItemsArray.h"
#include "MorDiscoveredLandmarksArray.h"
#include "MorDiscoveredPartialRecipesArray.h"
#include "MorDiscoveredRecipesArray.h"
#include "MorDiscoveredZonesArray.h"
#include "MorDiscoverySnapshotAppliedDelegate.h"
#include "MorEntitlementStatus.h"
#include "MorItemDiscoveredSignatureDelegate.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeLearnedSignatureDelegate.h"
#include "MorItemRecipePartialProgressChangedSignatureDelegate.h"
#include "MorItemRecipeRowHandle.h"
#include "MorLandmarkDiscoveredSignatureDelegate.h"
#include "MorLandmarkRowHandle.h"
#include "MorProgressChangedSignatureDelegate.h"
#include "MorProgressItemArray.h"
#include "MorProgressRowHandle.h"
#include "MorRecipeBlock.h"
#include "MorRecipeDiscoveredSignatureDelegate.h"
#include "MorRecipeRootGroupSubGroups.h"
#include "MorReplicatedManager.h"
#include "MorRuneDefinition.h"
#include "MorRuneRecipeLearnedSignatureDelegate.h"
#include "MorRuneRecipePartialProgressChangedSignatureDelegate.h"
#include "MorZoneDiscoveredSignatureDelegate.h"
#include "MorZoneRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorDiscoveryManager.generated.h"

class AActor;
class ACharacter;
class AController;
class APawn;

UCLASS(Blueprintable)
class MORIA_API AMorDiscoveryManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionRecipeDefinition> Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCategoryTagDefinition> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CategoryGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConstructionRootCategoryGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorCategoryTagDefinition> ConstructionRootCategoryGroupsCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMorCategoryTagDefinition, FMorRecipeRootGroupSubGroups> ConstructionRootCategorySubGroupsMapCached;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDiscoverySnapshotApplied OnSnapshotApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRecipeDiscoveredSignature OnRecipeDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionDiscoveredSignature OnConstructionDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemDiscoveredSignature OnItemDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeLearnedSignature OnConstructionRecipeLearned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRecipeLearnedSignature OnItemRecipeLearned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRuneRecipeLearnedSignature OnRuneRecipeLearned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipePartialProgressChangedSignature OnConstructionRecipePartialProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRecipePartialProgressChangedSignature OnItemRecipePartialProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRuneRecipePartialProgressChangedSignature OnRuneRecipePartialProgressChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDataViewedSignature OnDataViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneDiscoveredSignature OnZoneDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLandmarkDiscoveredSignature OnLandmarkDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorProgressChangedSignature OnProgressChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DiscoveredRecipes, meta=(AllowPrivateAccess=true))
    FMorDiscoveredRecipesArray DiscoveredRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DiscoveredConstructions, meta=(AllowPrivateAccess=true))
    FMorDiscoveredConstructionsArray DiscoveredConstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DiscoveredItems, meta=(AllowPrivateAccess=true))
    FMorDiscoveredItemsArray DiscoveredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DiscoveredZones, meta=(AllowPrivateAccess=true))
    FMorDiscoveredZonesArray DiscoveredZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DiscoveredLandmarks, meta=(AllowPrivateAccess=true))
    FMorDiscoveredLandmarksArray DiscoveredLandmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProgressMap, meta=(AllowPrivateAccess=true))
    FMorProgressItemArray ProgressMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PartialRecipes, meta=(AllowPrivateAccess=true))
    FMorDiscoveredPartialRecipesArray PartialRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExpeditionModifiers, meta=(AllowPrivateAccess=true))
    FMorDiscoveredExpeditionModifiersArray DiscoveredExpeditionModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorProgressRowHandle> DurinAxeFragmentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorItemRecipeRowHandle DurinAxe4thFragmentRecipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AchievementFireDelay;
    
public:
    AMorDiscoveryManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TriggerAchievementForZone(const ACharacter* Character, const FMorZoneRowHandle& ZoneHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressValues(const TMap<FMorProgressRowHandle, int32>& ProgressValues);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressValue(const FMorProgressRowHandle& InProgressKey, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(const FMorProgressRowHandle& InProgressKey);
    
    UFUNCTION(BlueprintCallable)
    void SetDurinAxeFragmentProgressComplete(int32 FragmentNumber);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PawnControllerChanged(APawn* Pawn, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProgressMap();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PartialRecipes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExpeditionModifiers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscoveredZones();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscoveredRecipes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscoveredLandmarks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscoveredItems();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DiscoveredConstructions();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEntitlementUpdate(const FName& EntitlementID, const FMorEntitlementStatus& Status);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsDurinAxeFragmentCollected(int32 FragmentNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorRecipeDiscoveryState GetRuneRecipeState(const FMorRuneDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRuneRecipeProgress(const FMorRuneDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorRecipeBlock> GetRecipeBlocks(const FMorCategoryTagDefinition& CategoryTagDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetProgressValue(const FMorProgressRowHandle& InProgressKey);
    
    UFUNCTION(BlueprintCallable)
    bool GetProgress(const FMorProgressRowHandle& InProgressKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorRecipeDiscoveryState GetItemRecipeState(const FMorItemRecipeDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemRecipeProgress(const FMorItemRecipeDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiscoveredRuneRecipesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiscoveredItemRecipesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiscoveredConstructionRecipesCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FMorCategoryTagDefinition> GetConstructionRootCategorySubGroups(const FMorCategoryTagDefinition& RootCategoryTag, EFGKGetDefinitionResult& OutResult) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorRecipeDiscoveryState GetConstructionRecipeState(const FMorConstructionRecipeDefinition& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConstructionRecipeProgress(const FMorConstructionRecipeDefinition& Recipe, int32& OutFragmentsCurrent, int32& OutFragmentsTotal) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FMorRecipeBlock> GetBlocksRecipeFromConstructionSubGroupsCached(const FMorCategoryTagDefinition& CategoryTags, EFGKGetDefinitionResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FMorRecipeBlock GetBlockContainingVariantHandle(const FMorConstructionRecipeRowHandle& RecipeHandle, EFGKGetDefinitionResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FMorRecipeBlock GetBlockContainingVariant(const FMorConstructionRecipeDefinition& RecipeDefinition, EFGKGetDefinitionResult& OutResult) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EncounterZone(const ACharacter* Character, const FMorZoneRowHandle& ZoneHandle, bool& bWasDiscoveredSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    void EncounterLandmark(const ACharacter* Character, const FMorLandmarkRowHandle& LandmarkHandle, bool& bWasDiscoveredSuccessfully);
    
    UFUNCTION(BlueprintCallable)
    void EncounterConstruction(const TSubclassOf<AActor>& Construction);
    
    UFUNCTION(BlueprintCallable)
    void DiscoverRecipe(const FName& RecipeName);
    
    UFUNCTION(BlueprintCallable)
    void ClearProgress(const FMorProgressRowHandle& InProgressKey);
    
    UFUNCTION(BlueprintCallable)
    bool CheckProgressValues(const TMap<FMorProgressRowHandle, int32>& ProgressValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorRuneDefinition> BP_GetDiscoveredRuneRecipes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorItemRecipeDefinition> BP_GetDiscoveredItemRecipes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorConstructionRecipeDefinition> BP_GetDiscoveredConstructionRecipes() const;
    
};

