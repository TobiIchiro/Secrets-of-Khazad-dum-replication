#include "MorRepairScreen.h"

UMorRepairScreen::UMorRepairScreen() {
    this->Repairer = NULL;
    this->RepairStation = NULL;
}

bool UMorRepairScreen::TryRepairingItem(FItemHandle RepairingItemHandle) const {
    return false;
}

TArray<FItemHandle> UMorRepairScreen::GetRepairableItems() const {
    return TArray<FItemHandle>();
}


