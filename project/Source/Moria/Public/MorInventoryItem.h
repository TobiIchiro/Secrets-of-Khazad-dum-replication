#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EFGKOverlayState.h"
#include "InventoryItem.h"
#include "ItemHandle.h"
#include "GameplayTagContainer.h"
#include "EMealTime.h"
#include "EMorEquipSlot.h"
#include "EMorItemPriority.h"
#include "EMoriaCharacterAction.h"
#include "MorLoreRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorInventoryItem.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UCalloutDataComponent;
class UGameplayAbility;
class UGameplayEffect;
class UInscribedRuneComponent;
class UMorItemTintEffect;
class UMorRuneEffect;
class UNiagaraComponent;
class USceneComponent;
class UTexture2D;
class UTransformLocatorComponent;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorInventoryItem : public AInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMoriaCharacterAction, TSubclassOf<UGameplayAbility>> AbilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKOverlayState AnimOverlayOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GripComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExtraGripComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BreakSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* EquipSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* UnequipSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EquipSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseFromInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNameFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNameFormat_Broken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorItemPriority ItemPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HeavyCarryRelativeTransformOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseDefaultCollisionForDroppedItem: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> UseEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMealTime MealTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> MealTimeUseEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorRuneEffect* StartingRuneEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInscribedRuneComponent* InscribedRuneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCalloutDataComponent* CalloutData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* RibbonTrails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepOutOfWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepOutOfWallsForPlayerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepOutOfWallCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KeepOutOfWallCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector KeepOutOfWallCapsuleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* NativeGripPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ExtraGripPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTransformLocatorComponent* HitLocator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInscribeRune;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLoreRowHandle LoreRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTintable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CharacterCreationCraftItemRowHandle;
    
public:
    AMorInventoryItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrailEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrailBegin(FGameplayTagContainer TrailTags, bool bIsChargeAttack, float ChargeAmount, EMoriaCharacterAction Action);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRuneVisualsApplied(const UMorRuneEffect* RuneEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargingFull();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargingEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargingBegin(float FullChargeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargedAttackLowEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargedAttackLowBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargedAttackFullEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargedAttackFullBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemTintable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMorItemTintEffect* GetTintEffect(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRuneInscribedDisplayName(const TSubclassOf<AInventoryItem>& Item, const UMorRuneEffect* Rune);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMorRuneEffect* GetRuneEffect(const FItemHandle& Item, bool IgnoreConstraints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<EMorEquipSlot> GetMorEquipSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorLoreRowHandle GetLoreRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetInstanceIcon(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetInstanceDisplayName(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetInstanceDescription(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInscribeRune() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTintToNonEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRuneVisualEffects(const FItemHandle& Item);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AnyEquippedChanged();
    
};

