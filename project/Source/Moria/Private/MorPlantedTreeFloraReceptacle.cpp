#include "MorPlantedTreeFloraReceptacle.h"
#include "MorBreakableComponent.h"
#include "Net/UnrealNetwork.h"

AMorPlantedTreeFloraReceptacle::AMorPlantedTreeFloraReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Breakable = CreateDefaultSubobject<UMorBreakableComponent>(TEXT("Breakable"));
    this->bCanGrow = true;
    this->CurrentSubGrowthStage = 0;
    this->GrowthRadiusCheck = 60.00f;
    this->ReadyRadiusCheck = 100.00f;
    this->RandomScale = 1.00f;
    this->RandomYaw = 0.00f;
}

void AMorPlantedTreeFloraReceptacle::OnRep_CurrentSubGrowthStage() {
}

void AMorPlantedTreeFloraReceptacle::OnRep_CanGrow() {
}

void AMorPlantedTreeFloraReceptacle::OnBreak(bool bPreRuined) {
}

void AMorPlantedTreeFloraReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorPlantedTreeFloraReceptacle, bCanGrow);
    DOREPLIFETIME(AMorPlantedTreeFloraReceptacle, CurrentSubGrowthStage);
    DOREPLIFETIME(AMorPlantedTreeFloraReceptacle, RandomScale);
    DOREPLIFETIME(AMorPlantedTreeFloraReceptacle, RandomYaw);
}


