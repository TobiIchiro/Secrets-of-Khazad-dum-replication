#pragma once
#include "CoreMinimal.h"
#include "InventoryQueryInterface.h"
#include "MorContainerItem.h"
#include "MorKegBase.generated.h"

class UEquipComponent;
class UInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API AMorKegBase : public AMorContainerItem, public IInventoryQueryInterface {
    GENERATED_BODY()
public:
    AMorKegBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
};

