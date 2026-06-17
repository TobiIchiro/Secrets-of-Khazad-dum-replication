#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemHandle.h"
#include "FGKInventoryUtils.generated.h"

class AInventoryItem;
class UInventoryComponent;

UCLASS(Blueprintable)
class FGK_API UFGKInventoryUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKInventoryUtils();

    UFUNCTION(BlueprintCallable)
    static bool IsEmpty(const UInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable)
    static bool IsContainerEmpty(const FItemHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalItemCount(const UInventoryComponent* Inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCountSum(const TSoftClassPtr<AInventoryItem>& ItemClass, const TArray<UInventoryComponent*>& Inventories);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetContainerTotalItemCount(const FItemHandle& Handle);
    
};

