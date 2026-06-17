#include "FGKInventoryItem.h"
#include "Net/UnrealNetwork.h"

AFGKInventoryItem::AFGKInventoryItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterOwner = NULL;
    this->LastCharacterOwner = NULL;
    this->bEquipped = false;
}

void AFGKInventoryItem::OnUnequipped_Implementation(ACharacter* Character) {
}

void AFGKInventoryItem::OnEquipped_Implementation(ACharacter* Character) {
}

void AFGKInventoryItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFGKInventoryItem, bEquipped);
}


