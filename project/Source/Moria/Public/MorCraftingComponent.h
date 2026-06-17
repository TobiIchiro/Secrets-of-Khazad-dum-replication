#pragma once
#include "CoreMinimal.h"
#include "CraftingComponent.h"
#include "ECraftRefundPolicy.h"
#include "ItemHandle.h"
#include "CraftingCanceledSignatureDelegate.h"
#include "CraftingPausedSignatureDelegate.h"
#include "EBubbleState.h"
#include "ECraftingType.h"
#include "MorArmorRowHandle.h"
#include "MorFuelRowHandle.h"
#include "MorItemDefinition.h"
#include "MorItemRecipeDefinition.h"
#include "MorItemRecipeRowHandle.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorTimedQueue.h"
#include "OnCollectedSignatureDelegate.h"
#include "RecipeFinishedSignatureDelegate.h"
#include "RecipeStartFailedSignatureDelegate.h"
#include "RecipeStartedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorCraftingComponent.generated.h"

class AActor;
class ACharacter;
class AMorCraftReceiver;
class AMorCraftingStation;
class AMorItemBase;
class UAnimMontage;
class UDataTable;
class UGameplayAbility;
class UMorCraftingComponent;
class UMorFuelBurningComponent;
class UMorInventoryComponent;
class UMorItemTintEffect;
class UMorRuneEffect;
class UWorldLayoutBubble;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorCraftingComponent : public UCraftingComponent, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeStartedSignature RecipeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeStartedSignature RecipeQueued;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeStartFailedSignature RecipeStartFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingPausedSignature CraftingPaused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeStartedSignature CraftingResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingCanceledSignature CraftingCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeFinishedSignature RecipeFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectedSignature OnCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> CraftAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECraftingType CraftingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InstantCraftingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMaxQueueCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CraftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreConstructionRequirements;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CraftQueue, meta=(AllowPrivateAccess=true))
    FMorTimedQueue CraftQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorFuelBurningComponent* CachedFuelBurningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* OwnerInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AMorItemBase>, UDataTable*> ItemToVOLineOnPickup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bParallelQueuing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentMaxQueueCount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 InGameTimeAtSaveInMinutes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CraftingDestinationScratchBuffer;
    
public:
    UMorCraftingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesParallelQueuing() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnlockCosmeticItem(const FMorItemDefinition& CosmeticItem);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnpinRecipe(const FMorItemRecipeRowHandle Recipe, AMorCraftingStation* CraftingStation) const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnlockCosmeticItem(const FMorArmorRowHandle& ArmorItemHandle) const;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTintItem(const FItemHandle& ItemHandle, UMorItemTintEffect* TintEffect, ACharacter* Interactor) const;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPinRecipe(const FMorItemRecipeRowHandle Recipe, AMorCraftingStation* CraftingStation) const;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInscribeRune(const FItemHandle& ItemHandle, UMorRuneEffect* Rune, ACharacter* Interactor) const;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelAllCrafts(UMorCraftingComponent* TargetComponent, AActor* Player, const ECraftRefundPolicy& RefundPolicy);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddFuel(UMorFuelBurningComponent* TargetComponent, AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CraftQueue();
    
    UFUNCTION(BlueprintCallable)
    void OnFuelExtinguished();
    
    UFUNCTION(BlueprintCallable)
    void OnFuelAdded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBubbleStateChange(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrafting() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorItemRecipeRowHandle> GetQueuedRecipes() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCraftReceiver* GetPreferredDestinationContainer(const FMorItemRecipeRowHandle& RecipeHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxQueueCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftTime(const FMorItemRecipeDefinition& RecipeDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftRemainingTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCraftProgress() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientUnlockCosmeticItem(const FMorArmorRowHandle& ArmorItemHandle) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTintEffectIfEquipped(const FItemHandle& ItemHandle);
    

    // Fix for true pure virtual functions not being implemented
};

