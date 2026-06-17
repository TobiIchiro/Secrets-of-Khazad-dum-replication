#pragma once
#include "CoreMinimal.h"
#include "InventoryQueryInterface.h"
#include "ItemHandle.h"
#include "MorAccessibleStorageInterface.h"
#include "MorInteractable.h"
#include "MorReceptacle.generated.h"

class UEquipComponent;
class UInventoryComponent;

UCLASS(Abstract, Blueprintable)
class MORIA_API AMorReceptacle : public AMorInteractable, public IInventoryQueryInterface, public IMorAccessibleStorageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanNPCEverDeposit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanNPCUseContent;
    
public:
    AMorReceptacle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNPCUseContent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNPCEverDeposit() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UInventoryComponent* GetInventory() const override PURE_VIRTUAL(GetInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UEquipComponent* GetEquip() const override PURE_VIRTUAL(GetEquip, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAccessibleStorage() const override PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetAccessibleStorageRoot() const override PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
};

