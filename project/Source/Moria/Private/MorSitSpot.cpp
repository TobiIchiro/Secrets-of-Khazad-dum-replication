#include "MorSitSpot.h"
#include "MorSitSpotTransformComponent.h"
#include "Net/UnrealNetwork.h"

AMorSitSpot::AMorSitSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractRequiredDistanceToClosestTransform = 150.00f;
    this->bIsOccupied = false;
    this->SitSpotTransformComponent = CreateDefaultSubobject<UMorSitSpotTransformComponent>(TEXT("SitSpotTransform"));
}

void AMorSitSpot::Multicast_RequestSitting_Implementation(AMorCharacter* Interactor) {
}

void AMorSitSpot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorSitSpot, bIsOccupied);
}


