#include "MorPlantedFloraReceptacle.h"
#include "Net/UnrealNetwork.h"

AMorPlantedFloraReceptacle::AMorPlantedFloraReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentGrowthStage = EMorGrowthStage::None;
    this->bIgnoreGrowthBroadcasts = false;
    this->SleepManager = NULL;
    this->FarmingManager = NULL;
    this->bWasGrowthBlocked = false;
    this->VariableGrowthTime = 0;
}

void AMorPlantedFloraReceptacle::OnRep_CurrentGrowthStage(EMorGrowthStage LastGrowthStage) {
}

EMorGrowthStage AMorPlantedFloraReceptacle::GetNextGrowthStage() const {
    return EMorGrowthStage::None;
}

EMorGrowthStage AMorPlantedFloraReceptacle::GetCurrentGrowthStage() const {
    return EMorGrowthStage::None;
}

void AMorPlantedFloraReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorPlantedFloraReceptacle, CurrentGrowthStage);
    DOREPLIFETIME(AMorPlantedFloraReceptacle, bIgnoreGrowthBroadcasts);
}


