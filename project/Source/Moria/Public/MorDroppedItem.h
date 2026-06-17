#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DroppedItemInterface.h"
#include "InventoryQueryInterface.h"
#include "ItemCount.h"
#include "ItemHandle.h"
#include "MorAccessibleStorageInterface.h"
#include "MorBreakableAttachable.h"
#include "MorInteraction.h"
#include "MorPickup.h"
#include "MorDroppedItem.generated.h"

class AActor;
class ACharacter;
class AInventoryItem;
class AMorPlayerController;
class UCalloutDataComponent;
class UEquipComponent;
class UInscribedRuneComponent;
class UInventoryComponent;
class UMorHeavyCarryTargetComponent;
class UMorInventoryComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UStaticMeshComponent;
class UUserWidget;

UCLASS(Blueprintable)
class MORIA_API AMorDroppedItem : public AMorPickup, public IDroppedItemInterface, public IMorAccessibleStorageInterface, public IInventoryQueryInterface, public IMorBreakableAttachable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopickupPickupDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopickupMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutopickupRepickupDelay;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DroppedItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCalloutDataComponent* CalloutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorHeavyCarryTargetComponent* HeavyCarryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInscribedRuneComponent* InscribedRuneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* PickupBeaconSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* EpicPickupBeaconSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupBeaconCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickRateIntervalBeingPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction AutoInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DroppedItemChanged, meta=(AllowPrivateAccess=true))
    FItemCount DroppedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TintColorChanged, meta=(AllowPrivateAccess=true))
    FLinearColor TintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PickUpSwapTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PickUpSwapEpicItemTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PickUpSwapEpicPackTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EquipSwapTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EquipSwapEpicItemTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EquipSwapEpicPackTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bInstantPickup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bAutopickup: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptOutFromDropItemManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bBeingPickedUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsAutoInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACharacter* Dropper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickupperChanged, meta=(AllowPrivateAccess=true))
    ACharacter* Pickupper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UInventoryComponent* PickupperInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AInventoryItem* Child;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction AccessStorageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> AccessStorageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction HeavyCarryInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedPickupBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorPlayerController*> ControllersRequestingToOpenStorage;
    
public:
    AMorDroppedItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGlowMat(float TargetGlow, float CurrentGlow);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldReady();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStorageWidgetFinishLoading();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TintColorChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupperChanged(ACharacter* OldPickupper);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DroppedItemChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void InventoryChanged(const FItemHandle& Item);
    
private:
    UFUNCTION(BlueprintCallable)
    void HeavyCarryEnd();
    
    UFUNCTION(BlueprintCallable)
    void HeavyCarryBegin();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasAccessibleStorage() const override PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetAccessibleStorageRoot() const override PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
};

