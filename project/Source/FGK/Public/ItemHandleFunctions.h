#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemHandle.h"
#include "Templates/SubclassOf.h"
#include "ItemHandleFunctions.generated.h"

class AInventoryItem;

UCLASS(Blueprintable)
class FGK_API UItemHandleFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemHandleFunctions();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToDebugString(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual(const FItemHandle& A, const FItemHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidRoot(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidItem(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidEmptySlot(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidAny(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRootType(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemType(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEquipped(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmptySlotType(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsContainer(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStorageWidth(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetStorageName(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetStorageMaxSlots(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetStorageDescription(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSlot(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRepairCount(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    static FItemHandle GetParentContainer(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLocalSlot(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemSlotsUsed(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FItemHandle GetItemForSlot(const FItemHandle& Item, const int32 Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventoryItem* GetItemDefaultObject(const TSubclassOf<AInventoryItem> ItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FItemHandle GetFirstNonEmptyItem(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FItemHandle GetFirstEmptySlot(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDurability(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCount(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable)
    static void GetContents(const FItemHandle& Item, TArray<FItemHandle>& OutItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AInventoryItem* GetClassDefault(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<AInventoryItem> GetClass(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual(const FItemHandle& A, const FItemHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainerUsesItemSize(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanMoveTo(const FItemHandle& Item, const FItemHandle& Destination);
    
};

