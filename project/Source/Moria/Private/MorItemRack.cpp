#include "MorItemRack.h"
#include "MorInventoryComponent.h"

AMorItemRack::AMorItemRack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorInventoryComponent>(TEXT("InventoryComponent"))) {
    this->bStorageInaccessible = false;
}


void AMorItemRack::SetGrabItemPriority(int32 NewPriority) {
}



