#include "FGKTargetableComponent.h"

UFGKTargetableComponent::UFGKTargetableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bRequireTagCheck = false;
    this->bTargetableWhenNotRendered = false;
    this->SphereRadius = 10.00f;
    this->SocketNames.AddDefaulted(1);
    this->bShouldBeConsideredInCombat = false;
    this->CharacterOwner = NULL;
    this->Manager = NULL;
}

void UFGKTargetableComponent::OnMeshChanged() {
}


