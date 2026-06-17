#include "InventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Storage = NULL;
    this->bMarkedAsNoDepositAllowed = false;
    this->bExcludeFromBaseInventoryQuery = false;
    this->DefaultDropItem = NULL;
    this->DropEjectForce = 100.00f;
    this->DropEjectForwardOffset = 100.00f;
    this->DropEjectUpOffset = 50.00f;
    this->DeathContainerClass = NULL;
    this->OverrideStartingLoadout = NULL;
    this->Equip = NULL;
}

FText UInventoryComponent::UseOrEquipText(const FItemHandle& Item) {
    return FText::GetEmpty();
}

void UInventoryComponent::UseOrEquipItem(const FItemHandle& Item) {
}

void UInventoryComponent::UseOrEquipHotbarIndex(int32 Index) {
}

void UInventoryComponent::SplitStack(const FItemHandle& Source, const FItemHandle& Destination, int32 MoveCount) {
}

void UInventoryComponent::SortContents(const FItemHandle& Container, bool bCombineStacks, int32 Mode) {
}

void UInventoryComponent::SetStartingLoadout(UInventoryLoadout* Loadout) {
}

void UInventoryComponent::ServerUse_Implementation(const FItemHandle& Item) {
}
bool UInventoryComponent::ServerUse_Validate(const FItemHandle& Item) {
    return true;
}

void UInventoryComponent::ServerSplitStack_Implementation(const FItemHandle& Source, const FItemHandle& Destination, int32 MoveCount) {
}
bool UInventoryComponent::ServerSplitStack_Validate(const FItemHandle& Source, const FItemHandle& Destination, int32 MoveCount) {
    return true;
}

void UInventoryComponent::ServerSortContents_Implementation(const FItemHandle& Container, bool bCombineStacks, int32 Mode) {
}
bool UInventoryComponent::ServerSortContents_Validate(const FItemHandle& Container, bool bCombineStacks, int32 Mode) {
    return true;
}

void UInventoryComponent::ServerRestoreItem_Implementation(const FItemHandle& Item) {
}
bool UInventoryComponent::ServerRestoreItem_Validate(const FItemHandle& Item) {
    return true;
}

void UInventoryComponent::ServerRemoveItem_Implementation(TSubclassOf<AInventoryItem> Item, int32 Count, EInventoryQuery From) {
}
bool UInventoryComponent::ServerRemoveItem_Validate(TSubclassOf<AInventoryItem> Item, int32 Count, EInventoryQuery From) {
    return true;
}

void UInventoryComponent::ServerMoveItem_Implementation(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
}
bool UInventoryComponent::ServerMoveItem_Validate(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
    return true;
}

void UInventoryComponent::ServerMoveAllDuplicates_Implementation(FItemHandle SourceContainer, FItemHandle DestinationContainer) {
}
bool UInventoryComponent::ServerMoveAllDuplicates_Validate(FItemHandle SourceContainer, FItemHandle DestinationContainer) {
    return true;
}

void UInventoryComponent::ServerMoveAll_Implementation(const FItemHandle& Source, const FItemHandle& Destination) {
}
bool UInventoryComponent::ServerMoveAll_Validate(const FItemHandle& Source, const FItemHandle& Destination) {
    return true;
}

void UInventoryComponent::ServerEmptyContainer_Implementation(const FItemHandle& Item) {
}
bool UInventoryComponent::ServerEmptyContainer_Validate(const FItemHandle& Item) {
    return true;
}

void UInventoryComponent::ServerEjectActorDirection_Implementation(AActor* TargetActor, const FVector& Direction) {
}
bool UInventoryComponent::ServerEjectActorDirection_Validate(AActor* TargetActor, const FVector& Direction) {
    return true;
}

void UInventoryComponent::ServerEjectActor_Implementation(AActor* TargetActor, const FEjectItemProperties& EjectProperties) {
}
bool UInventoryComponent::ServerEjectActor_Validate(AActor* TargetActor, const FEjectItemProperties& EjectProperties) {
    return true;
}

void UInventoryComponent::ServerDropItem_Implementation(const FItemHandle& Item, int32 Count, const FVector& Direction) {
}
bool UInventoryComponent::ServerDropItem_Validate(const FItemHandle& Item, int32 Count, const FVector& Direction) {
    return true;
}

void UInventoryComponent::ServerDebugSetItem_Implementation(TSubclassOf<AInventoryItem> Item, int32 Count) {
}
bool UInventoryComponent::ServerDebugSetItem_Validate(TSubclassOf<AInventoryItem> Item, int32 Count) {
    return true;
}

void UInventoryComponent::ServerDebugDamageItems_Implementation(float Percentage) {
}
bool UInventoryComponent::ServerDebugDamageItems_Validate(float Percentage) {
    return true;
}

void UInventoryComponent::ServerDebugBreakItems_Implementation() {
}
bool UInventoryComponent::ServerDebugBreakItems_Validate() {
    return true;
}

void UInventoryComponent::ServerDebugApplyLoadout_Implementation(UInventoryLoadout* Loadout) {
}
bool UInventoryComponent::ServerDebugApplyLoadout_Validate(UInventoryLoadout* Loadout) {
    return true;
}

void UInventoryComponent::ServerConfirmInventory_Implementation(const TArray<FItemInstance>& ClientInventory) {
}
bool UInventoryComponent::ServerConfirmInventory_Validate(const TArray<FItemInstance>& ClientInventory) {
    return true;
}

void UInventoryComponent::ServerChangeDurability_Implementation(const FItemHandle& Item, float RatioChange) {
}

void UInventoryComponent::ResetToStarting() {
}

void UInventoryComponent::RequestAddItem_Implementation(TSubclassOf<AInventoryItem> Class, int32 Count, EAddItem Method) {
}
bool UInventoryComponent::RequestAddItem_Validate(TSubclassOf<AInventoryItem> Class, int32 Count, EAddItem Method) {
    return true;
}

void UInventoryComponent::RemoveItem(TSubclassOf<AInventoryItem> Item, int32 Count, EInventoryQuery From) {
}

void UInventoryComponent::MoveItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
}

void UInventoryComponent::MoveAllDuplicates(const FItemHandle SourceContainer, const FItemHandle& DestinationContainer) {
}

void UInventoryComponent::MoveAll(const FItemHandle& Source, const FItemHandle& Destination) {
}

bool UInventoryComponent::IsValidItem(int32 Index) {
    return false;
}

bool UInventoryComponent::IsMarkedAsNoDepositAllowed() const {
    return false;
}

bool UInventoryComponent::HasItemCount(const FItemCount& ItemCount, EInventoryQuery From) const {
    return false;
}

FItemHandle UInventoryComponent::GetNextItem(const FItemHandle& Item) {
    return FItemHandle{};
}

int32 UInventoryComponent::GetMaxSlots() const {
    return 0;
}

TArray<FItemCount> UInventoryComponent::GetItemsCount(EInventoryQuery From) const {
    return TArray<FItemCount>();
}

TArray<UObject*> UInventoryComponent::GetItemListForUI() const {
    return TArray<UObject*>();
}

FItemHandle UInventoryComponent::GetItemHandleForRoot() {
    return FItemHandle{};
}

FItemHandle UInventoryComponent::GetItemForSlot(int32 Slot) {
    return FItemHandle{};
}

int32 UInventoryComponent::GetItemCountUsingSoftObjects(const TSoftClassPtr<AInventoryItem> Item, EInventoryQuery From) const {
    return 0;
}

int32 UInventoryComponent::GetItemCountById(const FName& ID, EInventoryQuery From) const {
    return 0;
}

int32 UInventoryComponent::GetItemCount(const TSubclassOf<AInventoryItem> Item, EInventoryQuery From) const {
    return 0;
}

FItemHandle UInventoryComponent::GetFirstItem() {
    return FItemHandle{};
}

void UInventoryComponent::GetAllItems(TArray<FItemHandle>& OutItems) {
}

void UInventoryComponent::EmptyContainer(const FItemHandle& Container) {
}

void UInventoryComponent::EjectActorDirection(AActor* TargetActor, const FVector& Direction) {
}

void UInventoryComponent::DropItemDirection(const FItemHandle& Item, int32 Count, const FVector& Direction) {
}

void UInventoryComponent::DropItem(const FItemHandle& Item, int32 Count) {
}

void UInventoryComponent::ClientConfirmInventory_Implementation(const TArray<FItemInstance>& ServerInventory) {
}

bool UInventoryComponent::CanSplitStack(const FItemHandle& Source, const FItemHandle& Destination, int32& OutMinMoveCount, int32& OutMaxMoveCount) const {
    return false;
}

bool UInventoryComponent::CanMoveItem(const FItemHandle& Item, const FItemHandle& Destination, EAddItem AddType) {
    return false;
}

bool UInventoryComponent::CanMoveAny(const FItemHandle& Source, const FItemHandle& Destination) const {
    return false;
}

bool UInventoryComponent::CanAddItemToContainer(const TSubclassOf<AInventoryItem> Item, FItemHandle& Destination, int32 Count) {
    return false;
}

bool UInventoryComponent::CanAddItem(const TSubclassOf<AInventoryItem> Item, int32 Count) {
    return false;
}

void UInventoryComponent::BroadcastToContainers_OnRemoved(TSubclassOf<AInventoryItem> ItemClass, int32 AmountRemoved, int32 NewTotalCount) {
}

void UInventoryComponent::BroadcastToContainers_OnChanged(const FItemHandle& Item) {
}

void UInventoryComponent::BroadcastToContainers_OnAdded(const FItemHandle& Item, TSubclassOf<AInventoryItem> ItemClass, int32 AmountAdded, int32 TotalCount, bool bParentContainerWasRecentlyAdded) {
}

void UInventoryComponent::AddItemWithResult(TSubclassOf<AInventoryItem> Item, int32 Count, EAddItem Method, FItemHandle& OutAdded, int32& OutAddedCount) {
}

FItemHandle UInventoryComponent::AddItem(const TSubclassOf<AInventoryItem> Item, int32 Count, EAddItem Method) {
    return FItemHandle{};
}

void UInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryComponent, Items);
    DOREPLIFETIME(UInventoryComponent, Effects);
}


