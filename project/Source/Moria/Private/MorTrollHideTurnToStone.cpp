#include "MorTrollHideTurnToStone.h"
#include "Net/UnrealNetwork.h"

UMorTrollHideTurnToStone::UMorTrollHideTurnToStone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightAmountNeeded = 5.00f;
    this->LightSamplerComponent = NULL;
    this->VfxDelay = 0.00f;
    this->VFXSystem = NULL;
    this->bIsStoneState = 0;
    this->TimeManager = NULL;
}

void UMorTrollHideTurnToStone::OnRep_StoneStateSet() {
}

void UMorTrollHideTurnToStone::BeginTransitionToStoneState() {
}

void UMorTrollHideTurnToStone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorTrollHideTurnToStone, bIsStoneState);
}


