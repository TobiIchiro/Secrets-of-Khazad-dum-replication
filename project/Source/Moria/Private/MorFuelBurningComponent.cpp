#include "MorFuelBurningComponent.h"
#include "Net/UnrealNetwork.h"

UMorFuelBurningComponent::UMorFuelBurningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurnSecondsPerFuelValue = 60.00f;
    this->MaxFuelCount = 1;
    this->DialogueToPlayOnFuelBeingAdded = NULL;
}

bool UMorFuelBurningComponent::TryAddFuel(AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count) {
    return false;
}

void UMorFuelBurningComponent::ServerAddFuel(AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count) {
}

void UMorFuelBurningComponent::OnRep_FuelQueue() {
}

bool UMorFuelBurningComponent::IsBurning() const {
    return false;
}

bool UMorFuelBurningComponent::HasSpaceForFuel() const {
    return false;
}

bool UMorFuelBurningComponent::HasFuel() const {
    return false;
}

TArray<FMorFuelRowHandle> UMorFuelBurningComponent::GetQueuedFuels() const {
    return TArray<FMorFuelRowHandle>();
}

TArray<FMorFuelRowHandle> UMorFuelBurningComponent::GetFuelFilter() const {
    return TArray<FMorFuelRowHandle>();
}

float UMorFuelBurningComponent::GetFuelDuration(const FMorFuelDefinition& FuelDefinition) const {
    return 0.0f;
}

bool UMorFuelBurningComponent::CanAddFuel(AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count) const {
    return false;
}

void UMorFuelBurningComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorFuelBurningComponent, FuelQueue);
}


