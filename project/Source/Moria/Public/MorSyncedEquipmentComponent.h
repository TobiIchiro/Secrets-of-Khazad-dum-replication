#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemHandle.h"
#include "MorSyncedEquipmentGroup.h"
#include "MorSyncedEquipmentGroupRecord.h"
#include "Templates/SubclassOf.h"
#include "MorSyncedEquipmentComponent.generated.h"

class AInventoryItem;
class UMorEquipComponent;
class UMorInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorSyncedEquipmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSyncedEquipmentGroup> EquipmentGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorSyncedEquipmentGroupRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorEquipComponent* Equip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorInventoryComponent* Inventory;
    
public:
    UMorSyncedEquipmentComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ItemUnequipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void ItemEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    void ItemAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> ItemClass, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded);
    
};

