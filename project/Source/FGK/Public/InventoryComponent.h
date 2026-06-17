#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ActiveItemEffectArray.h"
#include "EAddItem.h"
#include "EInventoryQuery.h"
#include "EjectItemProperties.h"
#include "FGKSaveGameObject.h"
#include "InventoryChangedSignatureDelegate.h"
#include "InventoryComponentFastArraySerializationState.h"
#include "InventoryDurabilityChangedSignatureDelegate.h"
#include "ItemAddedSignatureDelegate.h"
#include "ItemCount.h"
#include "ItemHandle.h"
#include "ItemInstance.h"
#include "ItemInstanceArray.h"
#include "ItemRemovedSignatureDelegate.h"
#include "ItemTypeAddedSignatureDelegate.h"
#include "ItemTypeRemovedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "InventoryComponent.generated.h"

class AActor;
class AInventoryItem;
class UEquipComponent;
class UInventoryLimit;
class UInventoryLoadout;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UInventoryComponent : public UActorComponent, public IFGKSaveGameObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ClientItems;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAddedSignature OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTypeAddedSignature OnItemTypeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRemovedSignature OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTypeRemovedSignature OnItemTypeRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryChangedSignature OnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryChangedSignature OnItemEffectChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryDurabilityChangedSignature OnDurabilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventoryLimit* Storage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkedAsNoDepositAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeFromBaseInventoryQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropEjectForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropEjectForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropEjectUpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropRotateForce;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DeathContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Hotbar;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FItemInstanceArray Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FActiveItemEffectArray Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventoryLoadout* OverrideStartingLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEquipComponent* Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FInventoryComponentFastArraySerializationState FastArraySerializationState;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    FText UseOrEquipText(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void UseOrEquipItem(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void UseOrEquipHotbarIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SplitStack(const FItemHandle& Source, const FItemHandle& Destination, int32 MoveCount);
    
    UFUNCTION(BlueprintCallable)
    void SortContents(const FItemHandle& Container, bool bCombineStacks, int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetStartingLoadout(UInventoryLoadout* Loadout);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUse(const FItemHandle& Item);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSplitStack(const FItemHandle& Source, const FItemHandle& Destination, int32 MoveCount);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSortContents(const FItemHandle& Container, bool bCombineStacks, int32 Mode);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRestoreItem(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItem(TSubclassOf<AInventoryItem> Item, int32 Count, EInventoryQuery From);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveAllDuplicates(FItemHandle SourceContainer, FItemHandle DestinationContainer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveAll(const FItemHandle& Source, const FItemHandle& Destination);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEmptyContainer(const FItemHandle& Item);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEjectActorDirection(AActor* TargetActor, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEjectActor(AActor* TargetActor, const FEjectItemProperties& EjectProperties);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem(const FItemHandle& Item, int32 Count, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugSetItem(TSubclassOf<AInventoryItem> Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugDamageItems(float Percentage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugBreakItems();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDebugApplyLoadout(UInventoryLoadout* Loadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerConfirmInventory(const TArray<FItemInstance>& ClientInventory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeDurability(const FItemHandle& Item, float RatioChange);
    
    UFUNCTION(BlueprintCallable)
    void ResetToStarting();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void RequestAddItem(TSubclassOf<AInventoryItem> Class, int32 Count, EAddItem Method);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(TSubclassOf<AInventoryItem> Item, int32 Count, EInventoryQuery From);
    
    UFUNCTION(BlueprintCallable)
    void MoveItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType);
    
    UFUNCTION(BlueprintCallable)
    void MoveAllDuplicates(const FItemHandle SourceContainer, const FItemHandle& DestinationContainer);
    
    UFUNCTION(BlueprintCallable)
    void MoveAll(const FItemHandle& Source, const FItemHandle& Destination);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidItem(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkedAsNoDepositAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemCount(const FItemCount& ItemCount, EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetNextItem(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemCount> GetItemsCount(EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UObject*> GetItemListForUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetItemHandleForRoot();
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetItemForSlot(int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCountUsingSoftObjects(const TSoftClassPtr<AInventoryItem> Item, EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCountById(const FName& ID, EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount(const TSubclassOf<AInventoryItem> Item, EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetFirstItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetAllItems(TArray<FItemHandle>& OutItems);
    
public:
    UFUNCTION(BlueprintCallable)
    void EmptyContainer(const FItemHandle& Container);
    
    UFUNCTION(BlueprintCallable)
    void EjectActorDirection(AActor* TargetActor, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    void DropItemDirection(const FItemHandle& Item, int32 Count, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    void DropItem(const FItemHandle& Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmInventory(const TArray<FItemInstance>& ServerInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool CanSplitStack(const FItemHandle& Source, const FItemHandle& Destination, int32& OutMinMoveCount, int32& OutMaxMoveCount) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMoveAny(const FItemHandle& Source, const FItemHandle& Destination) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItemToContainer(const TSubclassOf<AInventoryItem> Item, FItemHandle& Destination, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItem(const TSubclassOf<AInventoryItem> Item, int32 Count);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastToContainers_OnRemoved(TSubclassOf<AInventoryItem> ItemClass, int32 AmountRemoved, int32 NewTotalCount);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastToContainers_OnChanged(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastToContainers_OnAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> ItemClass, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddItemWithResult(TSubclassOf<AInventoryItem> Item, int32 Count, EAddItem Method, FItemHandle& OutAdded, int32& OutAddedCount);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle AddItem(const TSubclassOf<AInventoryItem> Item, int32 Count, EAddItem Method);
    

    // Fix for true pure virtual functions not being implemented
};

