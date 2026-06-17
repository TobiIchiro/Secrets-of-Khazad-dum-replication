#include "FGKDropItemManager.h"

AFGKDropItemManager::AFGKDropItemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->DefaultDropItemClass = NULL;
}

int32 AFGKDropItemManager::GetSortingPriority(const FItemHandle& Item) {
    return 0;
}

int32 AFGKDropItemManager::GetSortCombineStacksAmount_Implementation(const FItemHandle& ItemA, const FItemHandle& ItemB, int32 Mode) {
    return 0;
}

FName AFGKDropItemManager::GetNameForItemHandle(const FItemHandle& Item) {
    return NAME_None;
}

int32 AFGKDropItemManager::CompareItems_Implementation(const FItemHandle& ItemA, const FItemHandle& ItemB, int32 Mode) {
    return 0;
}


