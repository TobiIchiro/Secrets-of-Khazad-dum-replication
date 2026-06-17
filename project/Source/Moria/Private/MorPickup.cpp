#include "MorPickup.h"
#include "Net/UnrealNetwork.h"

AMorPickup::AMorPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRespawns = false;
    this->RespawnTime = 30.00f;
    this->RespawnInProgress = false;
}

void AMorPickup::OnRespawnInProgressChanged() {
}

int32 AMorPickup::GetItemCount(int32 ItemIndex) const {
    return 0;
}

int32 AMorPickup::AddItem(const FItemCount& ItemCount, bool bCheckIfValid) {
    return 0;
}

void AMorPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorPickup, ItemCounts);
    DOREPLIFETIME(AMorPickup, RespawnInProgress);
}


