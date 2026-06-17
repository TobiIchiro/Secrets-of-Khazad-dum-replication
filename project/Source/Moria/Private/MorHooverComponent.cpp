#include "MorHooverComponent.h"
#include "Net/UnrealNetwork.h"

UMorHooverComponent::UMorHooverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
    this->TimeTillHooverActivates = 0.50f;
    this->VFXSystem = NULL;
    this->SFX = NULL;
    this->bHooverEnabled = false;
    this->bEnabled = false;
    this->SpawnedEffect = NULL;
}

void UMorHooverComponent::SetEnabled_Implementation(bool bNowOn) {
}

void UMorHooverComponent::OnRep_HooverEnabled(bool OldEnabled) {
}

bool UMorHooverComponent::IsChargingTowardsHoover() const {
    return false;
}

float UMorHooverComponent::GetCurrentHooverTime() const {
    return 0.0f;
}

void UMorHooverComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorHooverComponent, bHooverEnabled);
}


