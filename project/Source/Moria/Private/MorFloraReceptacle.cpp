#include "MorFloraReceptacle.h"
#include "Net/UnrealNetwork.h"

AMorFloraReceptacle::AMorFloraReceptacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmptyFloraMesh = NULL;
    this->HasGrowthLimit = false;
    this->MaxGrowCount = 1;
    this->bPrefersInShade = false;
    this->MinimumFarmingLight = 0.00f;
    this->CurrentItemCount = 0;
    this->LightSampler = NULL;
    this->CurrentNightCount = 0;
    this->CurrentGrowCount = 1;
    this->LastNightCount = 0;
    this->bHadEnoughLight = false;
}

void AMorFloraReceptacle::OnRep_CurrentItemCount(int32 LastCount) {
}

bool AMorFloraReceptacle::HasReachedMaxGrowCount() const {
    return false;
}

bool AMorFloraReceptacle::HasEnoughLight() const {
    return false;
}

FMorAnyItemRowHandle AMorFloraReceptacle::GetFloraItemHandle() const {
    return FMorAnyItemRowHandle{};
}

void AMorFloraReceptacle::ClearReceptacle() {
}

void AMorFloraReceptacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorFloraReceptacle, CurrentItemCount);
}


