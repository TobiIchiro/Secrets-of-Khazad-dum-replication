#include "FGKMaintainedValueComponent.h"
#include "Net/UnrealNetwork.h"

UFGKMaintainedValueComponent::UFGKMaintainedValueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ValueMin = 0.00f;
    this->ValueMax = 1.00f;
    this->InitialValue = 0.00f;
    this->MaintainedValue = 0.00f;
}

bool UFGKMaintainedValueComponent::SetMaintainedValue(float NewValue) {
    return false;
}

void UFGKMaintainedValueComponent::Server_ValueChanged_Implementation() {
}

bool UFGKMaintainedValueComponent::Replenish(const float Value) {
    return false;
}




void UFGKMaintainedValueComponent::Multicast_ValueChanged_Implementation() {
}

bool UFGKMaintainedValueComponent::IsFull() const {
    return false;
}

float UFGKMaintainedValueComponent::GetMaintainedValue() const {
    return 0.0f;
}

bool UFGKMaintainedValueComponent::CanReplenish(const float Value) const {
    return false;
}

void UFGKMaintainedValueComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKMaintainedValueComponent, MaintainedValue);
}


