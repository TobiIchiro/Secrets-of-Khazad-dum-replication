#include "MorPlayerConstructionComponent.h"
#include "Net/UnrealNetwork.h"

UMorPlayerConstructionComponent::UMorPlayerConstructionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBuiltForFree = false;
}

void UMorPlayerConstructionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorPlayerConstructionComponent, bBuiltForFree);
}


