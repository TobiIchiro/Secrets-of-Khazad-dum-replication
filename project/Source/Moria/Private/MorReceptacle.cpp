#include "MorReceptacle.h"
#include "InventoryComponent.h"

AMorReceptacle::AMorReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisplayName = FText::FromString(TEXT("Receptacle"));
    this->Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
    this->bCanNPCEverDeposit = false;
    this->bCanNPCUseContent = false;
}

bool AMorReceptacle::CanNPCUseContent() const {
    return false;
}

bool AMorReceptacle::CanNPCEverDeposit() const {
    return false;
}


