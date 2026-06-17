#include "FGKParkourTraceSettings.h"

FFGKParkourTraceSettings::FFGKParkourTraceSettings() {
    this->ReachDistance = 0.00f;
    this->ForwardTraceRadius = 0.00f;
    this->MantleMaxLedgeHeight = 0.00f;
    this->MantleMinLedgeHeight = 0.00f;
    this->MantleDownwardTraceRadius = 0.00f;
    this->VaultQueryDistanceSide = 0.00f;
    this->VaultQueryDistanceDown = 0.00f;
    this->VaultElevationChangeThreshold = 0.00f;
    this->VaultTraceInterval = 0.00f;
    this->CollisionChannel = ECC_WorldStatic;
}

