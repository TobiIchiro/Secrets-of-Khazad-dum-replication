#pragma once
#include "CoreMinimal.h"
#include "InventoryQueryInterface.h"
#include "EMealTime.h"
#include "MealCraftCanceledDelegate.h"
#include "MealHasFoodDelegate.h"
#include "MealReceiverSpoiledDelegate.h"
#include "MealSkipToHasFoodDelegate.h"
#include "MorInteractable.h"
#include "Templates/SubclassOf.h"
#include "MorCraftReceiver.generated.h"

class ACharacter;
class AInventoryItem;
class UAkAudioEvent;
class UCraftingComponent;
class UEquipComponent;
class UInventoryComponent;
class UMorCraftingComponent;
class UMorInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API AMorCraftReceiver : public AMorInteractable, public IInventoryQueryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMealHasFood OnHasFood;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMealSkipToHasFood SkipToHasFood;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMealCraftCanceled OnCraftCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMealCraftCanceled OnCraftStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMealReceiverSpoiled OnSpoiled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> MealItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DinnerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Reserved, meta=(AllowPrivateAccess=true))
    bool bIsReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_StationReservedBy, meta=(AllowPrivateAccess=true))
    UCraftingComponent* StationReservedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* RegisteredStationReservedBy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* MorInventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondsTillSpoilage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMealTime MealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCraftQueueLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CraftQueueLimit;
    
public:
    AMorCraftReceiver(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void UpdateVisualsMulticast();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spoil();
    
    UFUNCTION(BlueprintCallable)
    void SetupNewMeal(TSubclassOf<AInventoryItem> NewItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsReserved(const bool Reserved, const bool CraftSucceeded, UCraftingComponent* Station);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConsume(TSubclassOf<AInventoryItem> Meal, ACharacter* Interactor, bool bByNPC);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StationReservedBy();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Reserved();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSpoiled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndReservation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndHasFood();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSpoiled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginReservation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginHasFood();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulicastPlayDinnerSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpoiled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCraftingComponent* GetStationReservedBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingItemsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReserved() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateFoodVisuals(int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void Consume(ACharacter* Interactor, bool bByNPC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Clear(ACharacter* Interactor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
};

