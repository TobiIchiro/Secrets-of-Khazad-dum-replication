#include "EquipKegInteractSubActor.h"
#include "MorInventoryComponent.h"
#include "Net/UnrealNetwork.h"

AEquipKegInteractSubActor::AEquipKegInteractSubActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UMorInventoryComponent>(TEXT("InventoryComponent"))) {
    this->AleMugClass = NULL;
    this->OwningKeg = NULL;
}

void AEquipKegInteractSubActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEquipKegInteractSubActor, OwningKeg);
}


