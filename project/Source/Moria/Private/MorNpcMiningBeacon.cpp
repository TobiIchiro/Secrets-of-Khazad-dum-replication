#include "MorNpcMiningBeacon.h"

UMorNpcMiningBeacon::UMorNpcMiningBeacon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TickInterval = 0.25f;
    this->MaxMiningPoints = 4;
    this->MinMiningPointSpacing = 300.00f;
    this->MiningTraceLength = 250.00f;
    this->NavProjectionDistance = 70.00f;
    this->BehaviorState = NULL;
    this->ScanBandHeight = 80.00f;
    this->bIsDirectedFrame = false;
    this->DirectedFrameScanDensity = 25.00f;
    this->bEnableCalloutTrace = false;
    this->CalledOutVeinTraceLimit = 1000.00f;
    this->bShowDebugs = false;
    this->SpacingSquared = 90000.00f;
    this->Phase = 0;
    this->bInvokeOnFirstMarker = false;
    this->ClosestOreDecal = NULL;
}

bool UMorNpcMiningBeacon::CanMineStone() const {
    return false;
}

bool UMorNpcMiningBeacon::CanMineOre() const {
    return false;
}


