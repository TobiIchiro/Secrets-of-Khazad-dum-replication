#pragma once
#include "CoreMinimal.h"
#include "EAddItem.h"
#include "EInventoryQuery.h"
#include "InventoryComponent.h"
#include "ItemHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EBubbleState.h"
#include "EMorItemHotbarBehavior.h"
#include "InventoryDecomposedSignatureDelegate.h"
#include "ItemAddedGroupedSignatureDelegate.h"
#include "MorAnyItemRowHandle.h"
#include "MorHotbarActionRequestSignatureDelegate.h"
#include "MorItemDefinition.h"
#include "MorStorageRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorInventoryComponent.generated.h"

class AInventoryItem;
class UAkAudioEvent;
class UWorldLayoutBubble;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultPickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultBreakSound;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStorageRowHandle StorageHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InventoryTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorHotbarActionRequestSignature OnHotbarActionRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAddedGroupedSignature OnItemAddedGrouped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryDecomposedSignature OnDecomposed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanAutoConsumeItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWrapHeavyCarryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTagBasedConditionalEquipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AInventoryItem>> DefaultContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HotbarSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HotbarEpicItemIndex;
    
public:
    UMorInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseFromItemHandle(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void UseFromInventoryIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveSwapItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType);
    
    UFUNCTION(BlueprintCallable)
    void ReadyToDestroyRingItems(const UWorldLayoutBubble* Bubble, EBubbleState NewState);
    
public:
    UFUNCTION(BlueprintCallable)
    void ProcessHotbarAction(int32 HotbarIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemUnEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(const FItemHandle& Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveSwapItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasContainers();
    
    UFUNCTION(BlueprintCallable)
    FText GetUseFromInventoryTextIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetSwapTarget(const FItemHandle& ExternalItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemHandle> GetItemsByTags(const FGameplayTagContainer& GameplayTags, bool IncludeItemsWithTags);
    
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetItemPickupSound(const TSubclassOf<AInventoryItem> Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMorItemHotbarBehavior GetItemHotbarBehavior(int32 HotbarIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetItemForHotbarSlot(int32 HotbarIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount_RowHandle(const FMorAnyItemRowHandle& ItemRowHandle, EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount_Definition(const FMorItemDefinition& ItemDefinition, EInventoryQuery From) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHotbarSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHotbarEpicItemIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemHandle> GetContainers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetContainerByTag(const FGameplayTag& GameplayTag);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientExpireItemFX(FItemHandle Item, AInventoryItem* ItemType, float Amount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAddItemFX(TSubclassOf<AInventoryItem> Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwap(const FItemHandle& ExternalItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItemNoHands(const TSubclassOf<AInventoryItem> Item, int32 Count);
    
};

