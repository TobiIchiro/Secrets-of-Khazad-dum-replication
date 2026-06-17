#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryQueryInterface.h"
#include "ItemHandle.h"
#include "EMorLootRewardStorageType.h"
#include "MorAccessibleStorageInterface.h"
#include "MorAnyItemRowHandle.h"
#include "MorChallengeElement.h"
#include "MorChallengeInstance.h"
#include "MorChallengeRecipeFragmentRewardsRequest.h"
#include "MorContainerInstance.h"
#include "MorContainerOwner.h"
#include "MorInteractable.h"
#include "MorToolRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorChallengeInteractable.generated.h"

class ACharacter;
class AMorChallengeInteractable;
class AMorChallengeReceptacle;
class AMorCharacter;
class AMorDroppedItem;
class UEquipComponent;
class UFGKActorFSMComponent;
class UFGKFilteredInventoryComponent;
class UGameplayEffect;
class UInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API AMorChallengeInteractable : public AMorInteractable, public IInventoryQueryInterface, public IMorChallengeInstance, public IMorAccessibleStorageInterface, public IMorContainerOwner, public IMorContainerInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMorChallengeElement ChallengeElementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChallengeRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepeatIsFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPartialPayment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenForRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasManualActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasUnpaidInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanRollLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitsForLinkedContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDontDestroyOnSaveLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWasActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWasPaid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bActivatedSinceReleasePatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bPaidForSinceReleasePatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsToBreakForReleasePatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bWasInteractedWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasOverWritten;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorDroppedItem> DefaultDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle PlaceholderReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RewardBuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorLootRewardStorageType RewardStorageLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* EnabledOnlyFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemperatureModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorChallengeInteractable*> PartsToRepair;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKFilteredInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorToolRowHandle> ToolRowHandlesRequiredToPayCost;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorChallengeReceptacle* LinkedContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCollectibleHighlight;
    
public:
    AMorChallengeInteractable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasPaid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasActivated() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWasPaid(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetWasActivated(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlyInteractor(const AMorCharacter* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipmentForAnimation(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void RestoreEquipmentForAnimation(ACharacter* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveSystemWorldStateIsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadedFromSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeFree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetRewardInventory() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropRewardItem(const FTransform& DropLocation);
    
    UFUNCTION(BlueprintCallable)
    void DropRecipeFragmentRewardsLoot(const FMorChallengeRecipeFragmentRewardsRequest& Request, const FTransform& DropLocation);
    
    UFUNCTION(BlueprintCallable)
    void DisableCollectibleHighlight();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearLoadedFlag();
    
    UFUNCTION(BlueprintCallable)
    bool AreAllPartsCompleted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyRewardBuff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AfterChallengeSetup();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAccessibleStorage() const override PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetAccessibleStorageRoot() const override PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
};

