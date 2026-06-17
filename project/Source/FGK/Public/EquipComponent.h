#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EEquipMode.h"
#include "EFGKCosmeticEquipSlot.h"
#include "EModularCharacterSlot.h"
#include "EquippedChangedSignatureDelegate.h"
#include "EquippedItem.h"
#include "EquippedItemArray.h"
#include "FGKCosmeticItemEffect.h"
#include "FGKCosmeticsMode.h"
#include "FGKEquippedCosmeticItem.h"
#include "FGKEquippedCosmeticItemArray.h"
#include "FGKEquippedPreviewCosmeticItemArray.h"
#include "FGKUniqueNetId.h"
#include "ItemEquippedSignatureDelegate.h"
#include "ItemHandle.h"
#include "TagRequestRecord.h"
#include "Templates/SubclassOf.h"
#include "EquipComponent.generated.h"

class AActor;
class AFGKBaseCharacter;
class AFGKProjectile;
class AInventoryItem;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UEquipComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEquippedCosmeticsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCosmeticsVisibilityChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Equipped, meta=(AllowPrivateAccess=true))
    FEquippedItemArray Equipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFGKEquippedCosmeticItemArray EquippedCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CosmeticsVisibility, meta=(AllowPrivateAccess=true))
    FFGKCosmeticsMode CosmeticsVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquippedItem> ClientEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippedChangedSignature OnEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEquippedSignature OnItemEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEquippedSignature OnItemUnEquipped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> PendingActorsToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FItemHandle> ProcessingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeToDeletePendingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFGKProjectile>> ProjectileTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTagRequestRecord> TagRequests;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquippedCosmeticsChanged OnEquippedCosmeticsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticsVisibilityChanged OnCosmeticsVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKEquippedPreviewCosmeticItemArray PreviewCosmetics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniqueNetId, meta=(AllowPrivateAccess=true))
    FFGKUniqueNetId UniqueNetId;
    
public:
    UEquipComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetProjectileTypeByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetCosmeticsVisibility(FFGKCosmeticsMode NewCosmeticsVisibility);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquip(FItemHandle Item, EEquipMode Mode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCosmeticEquip(const TSoftClassPtr<AInventoryItem>& Item, const FFGKCosmeticItemEffect& Effect, EEquipMode Mode, EFGKCosmeticEquipSlot ExplicitSlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UnequipAll();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetSelectedProjectileType(int32 NewSelectedProjectileTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetToStarting();
    
    UFUNCTION(BlueprintCallable)
    void RequestEquip(FItemHandle Item, EEquipMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void RequestCosmeticUnequipAll(bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void RequestCosmeticUnequip(EFGKCosmeticEquipSlot Slot, bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void RequestCosmeticsVisibility(FFGKCosmeticsMode NewCosmeticsVisibility);
    
    UFUNCTION(BlueprintCallable)
    void RequestCosmeticEquip(const TSoftClassPtr<AInventoryItem>& Item, const FFGKCosmeticItemEffect& Effect, EEquipMode Mode, bool bPreview);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniqueNetId();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Equipped();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CosmeticsVisibility();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SetSelectedProjectileType(int32 NewSelectedProjectileTypeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ItemIsHolstered(const FItemHandle& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ItemIsEquipped(const FItemHandle& Item) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InventoryChanged(const FItemHandle& Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingCosmeticEquips() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedProjectileTypeIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFGKProjectile> GetSelectedProjectileType() const;
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetEquippedWithTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetEquippedOfType(const TSubclassOf<AInventoryItem> Item, bool bExact) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetEquippedItemForActor(const AInventoryItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetEquippedInSocket(FName Socket) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetEquippedInSlot(EModularCharacterSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquippedCosmeticItems(TArray<FFGKEquippedCosmeticItem>& OutCosmeticItems, bool bIncludeEmptySlots, bool bPreview) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFGKEquippedCosmeticItem GetEquippedCosmeticItemForActor(const AInventoryItem* Item, bool& bOutHasItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFGKEquippedCosmeticItem GetEquippedCosmeticItemAtSlot(EFGKCosmeticEquipSlot Slot, bool bPreview, bool& bOutHasItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AInventoryItem* GetEquippedActorForItem(const FItemHandle& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConflictingEquips(const FItemHandle& Item, EEquipMode Mode, TArray<FItemHandle>& Conflicts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEquippedItem> GetAllEquippedOfType(const TSubclassOf<AInventoryItem> Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCosmeticPreview();
    
};

