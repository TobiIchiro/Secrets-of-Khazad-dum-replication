#include "MorOreBreakableContainer.h"
#include "Components/DecalComponent.h"
#include "Net/UnrealNetwork.h"

AMorOreBreakableContainer::AMorOreBreakableContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OreDecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("OreDecalComponent"));
    this->MaxDecalZRotation = 180.00f;
    this->MaxDecalScaleValue = 1.50f;
    this->OreDecalComponent->SetupAttachment(RootComponent);
}

void AMorOreBreakableContainer::OnRep_OreUpdated() {
}

void AMorOreBreakableContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorOreBreakableContainer, OreSyncData);
}


