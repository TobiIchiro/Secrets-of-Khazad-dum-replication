#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemHandle.h"
#include "MorAnyItemRowHandle.h"
#include "MorItemDefinition.h"
#include "MorInventoryUtils.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API UMorInventoryUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorInventoryUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UInventoryComponent* GetOwnerInventory_ItemHandle(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCountSum_RowHandle(const FMorAnyItemRowHandle& ItemRowHandle, const TArray<UInventoryComponent*>& Inventories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCountSum_Definition(const FMorItemDefinition& ItemDefinition, const TArray<UInventoryComponent*>& Inventories);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetInventoryCursorItem(UInventoryComponent* Inventory, FItemHandle& OutItem);
    
};

