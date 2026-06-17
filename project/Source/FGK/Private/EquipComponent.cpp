#include "EquipComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UEquipComponent::UEquipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Inventory = NULL;
    this->CharacterOwner = NULL;
    this->MaxTimeToDeletePendingItems = 2.00f;
}

void UEquipComponent::SetProjectileTypeByIndex(int32 Index) {
}

void UEquipComponent::ServerSetCosmeticsVisibility_Implementation(FFGKCosmeticsMode NewCosmeticsVisibility) {
}

void UEquipComponent::ServerEquip_Implementation(FItemHandle Item, EEquipMode Mode) {
}
bool UEquipComponent::ServerEquip_Validate(FItemHandle Item, EEquipMode Mode) {
    return true;
}

void UEquipComponent::ServerCosmeticEquip_Implementation(const TSoftClassPtr<AInventoryItem>& Item, const FFGKCosmeticItemEffect& Effect, EEquipMode Mode, EFGKCosmeticEquipSlot ExplicitSlot) {
}

void UEquipComponent::Server_UnequipAll_Implementation() {
}

void UEquipComponent::Server_SetSelectedProjectileType_Implementation(int32 NewSelectedProjectileTypeIndex) {
}

void UEquipComponent::ResetToStarting() {
}

void UEquipComponent::RequestEquip(FItemHandle Item, EEquipMode Mode) {
}

void UEquipComponent::RequestCosmeticUnequipAll(bool bPreview) {
}

void UEquipComponent::RequestCosmeticUnequip(EFGKCosmeticEquipSlot Slot, bool bPreview) {
}

void UEquipComponent::RequestCosmeticsVisibility(FFGKCosmeticsMode NewCosmeticsVisibility) {
}

void UEquipComponent::RequestCosmeticEquip(const TSoftClassPtr<AInventoryItem>& Item, const FFGKCosmeticItemEffect& Effect, EEquipMode Mode, bool bPreview) {
}

void UEquipComponent::OnRep_UniqueNetId() {
}

void UEquipComponent::OnRep_Equipped() {
}

void UEquipComponent::OnRep_CosmeticsVisibility() {
}

void UEquipComponent::Multicast_SetSelectedProjectileType_Implementation(int32 NewSelectedProjectileTypeIndex) {
}

bool UEquipComponent::ItemIsHolstered(const FItemHandle& Item) const {
    return false;
}

bool UEquipComponent::ItemIsEquipped(const FItemHandle& Item) const {
    return false;
}

void UEquipComponent::InventoryChanged(const FItemHandle& Item) {
}

bool UEquipComponent::HasPendingCosmeticEquips() const {
    return false;
}

int32 UEquipComponent::GetSelectedProjectileTypeIndex() const {
    return 0;
}

TSubclassOf<AFGKProjectile> UEquipComponent::GetSelectedProjectileType() const {
    return NULL;
}

FItemHandle UEquipComponent::GetEquippedWithTag(const FGameplayTag& Tag) {
    return FItemHandle{};
}

FItemHandle UEquipComponent::GetEquippedOfType(const TSubclassOf<AInventoryItem> Item, bool bExact) const {
    return FItemHandle{};
}

FItemHandle UEquipComponent::GetEquippedItemForActor(const AInventoryItem* Item) const {
    return FItemHandle{};
}

FItemHandle UEquipComponent::GetEquippedInSocket(FName Socket) const {
    return FItemHandle{};
}

FItemHandle UEquipComponent::GetEquippedInSlot(EModularCharacterSlot Slot) const {
    return FItemHandle{};
}

void UEquipComponent::GetEquippedCosmeticItems(TArray<FFGKEquippedCosmeticItem>& OutCosmeticItems, bool bIncludeEmptySlots, bool bPreview) const {
}

FFGKEquippedCosmeticItem UEquipComponent::GetEquippedCosmeticItemForActor(const AInventoryItem* Item, bool& bOutHasItem) const {
    return FFGKEquippedCosmeticItem{};
}

FFGKEquippedCosmeticItem UEquipComponent::GetEquippedCosmeticItemAtSlot(EFGKCosmeticEquipSlot Slot, bool bPreview, bool& bOutHasItem) const {
    return FFGKEquippedCosmeticItem{};
}

AInventoryItem* UEquipComponent::GetEquippedActorForItem(const FItemHandle& Item) const {
    return NULL;
}

void UEquipComponent::GetConflictingEquips(const FItemHandle& Item, EEquipMode Mode, TArray<FItemHandle>& Conflicts) const {
}

TArray<FEquippedItem> UEquipComponent::GetAllEquippedOfType(const TSubclassOf<AInventoryItem> Item) const {
    return TArray<FEquippedItem>();
}

void UEquipComponent::ClearCosmeticPreview() {
}

void UEquipComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEquipComponent, Equipped);
    DOREPLIFETIME(UEquipComponent, EquippedCosmetics);
    DOREPLIFETIME(UEquipComponent, CosmeticsVisibility);
    DOREPLIFETIME(UEquipComponent, UniqueNetId);
}


