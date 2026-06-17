#include "MorDeathReceptacle.h"
#include "MorInventoryComponent.h"
#include "MorPreciousssComponent.h"

AMorDeathReceptacle::AMorDeathReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorInventoryComponent>(TEXT("InventoryComponent"))) {
    this->PreciousssComponent = CreateDefaultSubobject<UMorPreciousssComponent>(TEXT("Preciousss"));
}


