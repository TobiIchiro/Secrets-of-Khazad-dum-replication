#include "FGKSimplePickupComponent.h"

UFGKSimplePickupComponent::UFGKSimplePickupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SimpleValue = 0.00f;
    this->ReplenishableType = NULL;
}


