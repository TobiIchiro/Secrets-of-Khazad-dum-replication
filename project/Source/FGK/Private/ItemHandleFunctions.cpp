#include "ItemHandleFunctions.h"
#include "Templates/SubclassOf.h"

UItemHandleFunctions::UItemHandleFunctions() {
}

FString UItemHandleFunctions::ToString(const FItemHandle& Item) {
    return TEXT("");
}

FString UItemHandleFunctions::ToDebugString(const FItemHandle& Item) {
    return TEXT("");
}

bool UItemHandleFunctions::NotEqual(const FItemHandle& A, const FItemHandle& B) {
    return false;
}

bool UItemHandleFunctions::IsValidRoot(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsValidItem(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsValidEmptySlot(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsValidAny(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsRootType(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsItemType(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsEquipped(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsEmptySlotType(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::IsContainer(const FItemHandle& Item) {
    return false;
}

int32 UItemHandleFunctions::GetStorageWidth(const FItemHandle& Item) {
    return 0;
}

FText UItemHandleFunctions::GetStorageName(const FItemHandle& Item) {
    return FText::GetEmpty();
}

int32 UItemHandleFunctions::GetStorageMaxSlots(const FItemHandle& Item) {
    return 0;
}

FText UItemHandleFunctions::GetStorageDescription(const FItemHandle& Item) {
    return FText::GetEmpty();
}

int32 UItemHandleFunctions::GetSlot(const FItemHandle& Item) {
    return 0;
}

int32 UItemHandleFunctions::GetRepairCount(const FItemHandle& Item) {
    return 0;
}

FItemHandle UItemHandleFunctions::GetParentContainer(const FItemHandle& Item) {
    return FItemHandle{};
}

int32 UItemHandleFunctions::GetLocalSlot(const FItemHandle& Item) {
    return 0;
}

int32 UItemHandleFunctions::GetItemSlotsUsed(const FItemHandle& Item) {
    return 0;
}

FItemHandle UItemHandleFunctions::GetItemForSlot(const FItemHandle& Item, const int32 Slot) {
    return FItemHandle{};
}

AInventoryItem* UItemHandleFunctions::GetItemDefaultObject(const TSubclassOf<AInventoryItem> ItemClass) {
    return NULL;
}

FItemHandle UItemHandleFunctions::GetFirstNonEmptyItem(const FItemHandle& Item) {
    return FItemHandle{};
}

FItemHandle UItemHandleFunctions::GetFirstEmptySlot(const FItemHandle& Item) {
    return FItemHandle{};
}

float UItemHandleFunctions::GetDurability(const FItemHandle& Item) {
    return 0.0f;
}

int32 UItemHandleFunctions::GetCount(const FItemHandle& Item) {
    return 0;
}

void UItemHandleFunctions::GetContents(const FItemHandle& Item, TArray<FItemHandle>& OutItems) {
}

AInventoryItem* UItemHandleFunctions::GetClassDefault(const FItemHandle& Item) {
    return NULL;
}

TSubclassOf<AInventoryItem> UItemHandleFunctions::GetClass(const FItemHandle& Item) {
    return NULL;
}

bool UItemHandleFunctions::EqualEqual(const FItemHandle& A, const FItemHandle& B) {
    return false;
}

bool UItemHandleFunctions::ContainerUsesItemSize(const FItemHandle& Item) {
    return false;
}

bool UItemHandleFunctions::CanMoveTo(const FItemHandle& Item, const FItemHandle& Destination) {
    return false;
}


