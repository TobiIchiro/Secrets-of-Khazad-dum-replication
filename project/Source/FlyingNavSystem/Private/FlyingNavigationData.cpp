#include "FlyingNavigationData.h"
#include "NavigationData.h"

AFlyingNavigationData::AFlyingNavigationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableDrawing = true;
    this->bForceRebuildOnLoad = true;
    this->RuntimeGeneration = ERuntimeGenerationType::Dynamic;
    this->MaxDetailSize = 150.00f;
    this->bMultiThreaded = true;
    this->ThreadSubdivisions = EThreadSubdivisions::Four;
    this->MaxThreads = 2;
    this->bUseAgentRadius = false;
    this->bUseExclusiveBounds = false;
    this->bUsePreciseExclusiveBounds = false;
    this->bBuildOnBeginPlay = false;
    this->bDrawOctreeNodes = false;
    this->bDrawOctreeSubNodes = true;
    this->bDrawOnlyOverlappedSubNodes = true;
    this->bColourByConnected = true;
    this->NodeMargin = 0.00f;
    this->WireThickness = 0.02f;
    this->bDrawNeighbourConnections = false;
    this->bDrawSimplifiedConnections = true;
    this->NodeCentreRadius = 100.00f;
    this->TiledLayer = 1;
    this->ThrottleMultiplier = 1.00f;
    this->MaxThrottleDelay = 60.00f;
}

void AFlyingNavigationData::StopRebuild() {
}

void AFlyingNavigationData::RebuildNavigationData() {
}

void AFlyingNavigationData::RebuildFlyingNavigation(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool AFlyingNavigationData::OctreeRaycast(const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation) const {
    return false;
}

bool AFlyingNavigationData::IsNavigationDataBuilt() const {
    return false;
}

float AFlyingNavigationData::CurrentlyBuiltVoxelSize() const {
    return 0.0f;
}


