#include "MorGameplayTodLightComponent.h"

UMorGameplayTodLightComponent::UMorGameplayTodLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeManager = NULL;
    this->LightSampler = NULL;
    this->TimeMode = EGameplayTodLightMode::Both;
    this->HasLightInMode = false;
    this->IsNighttime = false;
}

void UMorGameplayTodLightComponent::TimePeriodChanged(FClockTimePeriod TimePeriod, bool bQuiet) {
}

bool UMorGameplayTodLightComponent::IsReceivingLight() {
    return false;
}


