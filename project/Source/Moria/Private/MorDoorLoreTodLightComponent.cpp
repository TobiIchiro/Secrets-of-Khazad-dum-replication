#include "MorDoorLoreTodLightComponent.h"
#include "Templates/SubclassOf.h"

UMorDoorLoreTodLightComponent::UMorDoorLoreTodLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Door = NULL;
}

TSubclassOf<UGameplayAbility> UMorDoorLoreTodLightComponent::GetSingGameplayAbility() const {
    return NULL;
}

FMorDoorLoreTodRowHandle UMorDoorLoreTodLightComponent::GetRowHandle() const {
    return FMorDoorLoreTodRowHandle{};
}

bool UMorDoorLoreTodLightComponent::GetRequiresEntitlement() const {
    return false;
}

bool UMorDoorLoreTodLightComponent::GetIsEntitlementUsable() const {
    return false;
}


