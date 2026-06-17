#include "MorFilteredResourceReceptacle.h"
#include "MorInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AMorFilteredResourceReceptacle::AMorFilteredResourceReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorInventoryComponent>(TEXT("InventoryComponent"))) {
    this->ItemIncrement = 5;
    this->bUseFirstObjectAsInteractableName = true;
    this->bLimitByStorageSlotsInsteadOfRawItemCount = false;
    this->bAllowInventoryToBeAccessed = false;
    this->bUseWithdrawInteraction = true;
    this->Capacity = 100;
    this->bPopulateItemFilterFromTags = false;
    this->bAllowDepositAll = false;
}


void AMorFilteredResourceReceptacle::OnInventoryItemRemoved(TSubclassOf<AInventoryItem> ItemClass) {
}

void AMorFilteredResourceReceptacle::OnInventoryChanged(const FItemHandle& ItemHandle) {
}


void AMorFilteredResourceReceptacle::OnFilterReplicated() {
}

int32 AMorFilteredResourceReceptacle::GetRemainingCapacity(TSoftClassPtr<AInventoryItem> Item) const {
    return 0;
}

FText AMorFilteredResourceReceptacle::GetFilterName() const {
    return FText::GetEmpty();
}

void AMorFilteredResourceReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorFilteredResourceReceptacle, AllowedItemTypes);
    DOREPLIFETIME(AMorFilteredResourceReceptacle, Capacity);
}


