#include "MorInventoryComponent.h"
#include "Templates/SubclassOf.h"

UMorInventoryComponent::UMorInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultPickupSound = NULL;
    this->DefaultBreakSound = NULL;
    this->bCanAutoConsumeItems = false;
    this->bWrapHeavyCarryItems = true;
    this->bUseTagBasedConditionalEquipping = true;
    this->HotbarSize = 8;
    this->HotbarEpicItemIndex = 9;
}

void UMorInventoryComponent::UseFromItemHandle(const FItemHandle& Item) {
}

void UMorInventoryComponent::UseFromInventoryIndex(int32 Index) {
}

void UMorInventoryComponent::ServerMoveSwapItem_Implementation(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
}
bool UMorInventoryComponent::ServerMoveSwapItem_Validate(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
    return true;
}

void UMorInventoryComponent::ReadyToDestroyRingItems(const UWorldLayoutBubble* Bubble, EBubbleState NewState) {
}

void UMorInventoryComponent::ProcessHotbarAction(int32 HotbarIndex) {
}

void UMorInventoryComponent::OnItemUnEquipped(const FItemHandle& Item) {
}

void UMorInventoryComponent::OnItemEquipped(const FItemHandle& Item) {
}

void UMorInventoryComponent::MoveSwapItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
}

bool UMorInventoryComponent::HasContainers() {
    return false;
}

FText UMorInventoryComponent::GetUseFromInventoryTextIndex(int32 Index) {
    return FText::GetEmpty();
}

FItemHandle UMorInventoryComponent::GetSwapTarget(const FItemHandle& ExternalItem) {
    return FItemHandle{};
}

TArray<FItemHandle> UMorInventoryComponent::GetItemsByTags(const FGameplayTagContainer& GameplayTags, bool IncludeItemsWithTags) {
    return TArray<FItemHandle>();
}

UAkAudioEvent* UMorInventoryComponent::GetItemPickupSound(const TSubclassOf<AInventoryItem> Item) {
    return NULL;
}

EMorItemHotbarBehavior UMorInventoryComponent::GetItemHotbarBehavior(int32 HotbarIndex) {
    return EMorItemHotbarBehavior::None;
}

FItemHandle UMorInventoryComponent::GetItemForHotbarSlot(int32 HotbarIndex) {
    return FItemHandle{};
}

int32 UMorInventoryComponent::GetItemCount_RowHandle(const FMorAnyItemRowHandle& ItemRowHandle, EInventoryQuery From) const {
    return 0;
}

int32 UMorInventoryComponent::GetItemCount_Definition(const FMorItemDefinition& ItemDefinition, EInventoryQuery From) const {
    return 0;
}

int32 UMorInventoryComponent::GetHotbarSize() const {
    return 0;
}

int32 UMorInventoryComponent::GetHotbarEpicItemIndex() const {
    return 0;
}

TArray<FItemHandle> UMorInventoryComponent::GetContainers() {
    return TArray<FItemHandle>();
}

FItemHandle UMorInventoryComponent::GetContainerByTag(const FGameplayTag& GameplayTag) {
    return FItemHandle{};
}

void UMorInventoryComponent::ClientExpireItemFX_Implementation(FItemHandle Item, AInventoryItem* ItemType, float Amount) {
}

void UMorInventoryComponent::ClientAddItemFX_Implementation(TSubclassOf<AInventoryItem> Item, int32 Count) {
}

bool UMorInventoryComponent::CanSwap(const FItemHandle& ExternalItem) {
    return false;
}

bool UMorInventoryComponent::CanAddItemNoHands(const TSubclassOf<AInventoryItem> Item, int32 Count) {
    return false;
}


