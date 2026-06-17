#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InventoryQueryInterface.generated.h"

class UEquipComponent;
class UInventoryComponent;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UInventoryQueryInterface : public UInterface {
    GENERATED_BODY()
};

class IInventoryQueryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UInventoryComponent* GetInventory() const PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UEquipComponent* GetEquip() const PURE_VIRTUAL(GetEquip, return NULL;);
    
};

