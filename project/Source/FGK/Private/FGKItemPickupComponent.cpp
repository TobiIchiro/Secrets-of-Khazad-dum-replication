#include "FGKItemPickupComponent.h"

UFGKItemPickupComponent::UFGKItemPickupComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Item = NULL;
    this->Amount = 0;
}

void UFGKItemPickupComponent::Server_AddItem_Implementation(AActor* PlayerActor) {
}
bool UFGKItemPickupComponent::Server_AddItem_Validate(AActor* PlayerActor) {
    return true;
}


