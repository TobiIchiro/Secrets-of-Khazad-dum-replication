#include "MorRepairStation.h"
#include "FGKActorFSMComponent.h"

AMorRepairStation::AMorRepairStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RepairScreen = NULL;
    this->FSMComp = CreateDefaultSubobject<UFGKActorFSMComponent>(TEXT("InteractableFSMComp"));
}

void AMorRepairStation::ShowRepairScreen(ACharacter* Interactor) const {
}

bool AMorRepairStation::IsFullyRepaired(FItemHandle ItemHandle) const {
    return false;
}

TArray<FMorRequiredRecipeMaterial> AMorRepairStation::GetRepairCosts(const FItemHandle RepairingItemHandle) const {
    return TArray<FMorRequiredRecipeMaterial>();
}

bool AMorRepairStation::CanRepair(FItemHandle ItemHandle) const {
    return false;
}

bool AMorRepairStation::CanPayCost(FItemHandle RepairingItemHandle, AActor* Repairer) const {
    return false;
}


