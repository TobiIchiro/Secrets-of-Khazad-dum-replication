#include "MorResourceReceptacle.h"
#include "MorInventoryComponent.h"

AMorResourceReceptacle::AMorResourceReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorInventoryComponent>(TEXT("InventoryComponent"))) {
}


