#include "MorFarmingReceptacle.h"
#include "Net/UnrealNetwork.h"

AMorFarmingReceptacle::AMorFarmingReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlantableTypes.AddDefaulted(1);
    this->LightSampler = NULL;
    this->PlantedFlora = NULL;
}

void AMorFarmingReceptacle::OnRep_PlantedFlora() {
}

AMorPlantedFloraReceptacle* AMorFarmingReceptacle::GetPlantedFlora() const {
    return NULL;
}

float AMorFarmingReceptacle::GetLightAmount() const {
    return 0.0f;
}

bool AMorFarmingReceptacle::CanPlantFloraType(const EMorFarmingFloraType FloraType) const {
    return false;
}

void AMorFarmingReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorFarmingReceptacle, PlantedFlora);
}


