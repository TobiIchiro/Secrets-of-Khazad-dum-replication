#include "MorPreciousssComponent.h"
#include "Net/UnrealNetwork.h"

UMorPreciousssComponent::UMorPreciousssComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UMorPreciousssComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorPreciousssComponent, UniqueGuid);
    DOREPLIFETIME(UMorPreciousssComponent, ClaimantGuid);
}


