#include "MorBreakableContainer.h"
#include "MorInventoryComponent.h"

AMorBreakableContainer::AMorBreakableContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Inventory = CreateDefaultSubobject<UMorInventoryComponent>(TEXT("Inventory"));
}


