#include "MorConstructionStabilityComponent.h"
#include "Net/UnrealNetwork.h"

UMorConstructionStabilityComponent::UMorConstructionStabilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHasCustomFoundationStability = false;
    this->CustomFoundationStability = 120.00f;
    this->bOverrideRecipeData = false;
    this->bBuildAsFoundationOverride = false;
    this->bInheritFoundationStabilityOverride = false;
    this->bIsFoundation = false;
    this->bIsRooted = false;
    this->Stability = 80.00f;
    this->GroundStability = 0.00f;
    this->MinStability = 80.00f;
    this->HeapStability = 80.00f;
    this->ActiveTickCount = 0;
    this->MinStabilityNeighborIndex = -1;
    this->MinStabilityDirection = ENeighborDirection::None;
    this->StabilityNeighborIndex = -1;
    this->StateStartTime = 0.00f;
    this->State = EStabilityState::Uninitialized;
    this->bInheritFoundationStability = false;
    this->bIsOnFoundation = false;
    this->bHasGroundStability = false;
    this->PreplacedStabilityCostMultiplier = 1.00f;
    this->GroundNeighborIndex = -1;
}

void UMorConstructionStabilityComponent::OnRep_StabilityState() {
}

void UMorConstructionStabilityComponent::OnBroken(bool bPreRuined) {
}

void UMorConstructionStabilityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMorConstructionStabilityComponent, Stability);
    DOREPLIFETIME(UMorConstructionStabilityComponent, StabilityPoints);
    DOREPLIFETIME(UMorConstructionStabilityComponent, State);
}


