#include "BreweryTap.h"
#include "Net/UnrealNetwork.h"

ABreweryTap::ABreweryTap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BrewMugToSpawn = NULL;
    this->bIsTavernKeg = false;
    this->bTransportationInProgress = false;
}

void ABreweryTap::EnableDrainInteraction(bool bEnabled) {
}

void ABreweryTap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABreweryTap, bTransportationInProgress);
}


