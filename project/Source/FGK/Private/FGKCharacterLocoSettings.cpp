#include "FGKCharacterLocoSettings.h"

UFGKCharacterLocoSettings::UFGKCharacterLocoSettings() {
    this->RollAnimations = NULL;
    this->GetUpAnimations = NULL;
    this->ParkourTraceSettings = NULL;
    this->MaxMantleAngle = 45.00f;
    this->MantleNudgeOverEdgeOffset = 0.00f;
    this->AcceptableVelocityWhileMantling = 10.00f;
    this->HighMantleHeightThreshold = 125.00f;
    this->MantleAnimations = NULL;
    this->SwingAnimations = NULL;
    this->VaultAnimations = NULL;
    this->VaultTypeConfigs = NULL;
}


