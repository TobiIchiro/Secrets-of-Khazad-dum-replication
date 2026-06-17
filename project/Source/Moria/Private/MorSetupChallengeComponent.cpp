#include "MorSetupChallengeComponent.h"

UMorSetupChallengeComponent::UMorSetupChallengeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowChallengeManagerToOverride = false;
    this->ItemMode = EDebugItemPopulationMode::None;
}

AChallengeProxy* UMorSetupChallengeComponent::GetChallengeProxy() const {
    return NULL;
}


