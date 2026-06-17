#include "MorRavenConstructionManager.h"
#include "Net/UnrealNetwork.h"

AMorRavenConstructionManager::AMorRavenConstructionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnRavenAtLastConstruction = true;
    this->LimitConstructionBuild = false;
    this->LimitConstructionBuildToBubble = false;
    this->AllowedDistanceBetweenNewConstruction = 1000.00f;
    this->AvailableConstructionId = 0;
}

bool AMorRavenConstructionManager::HasAnyActiveConstruction() const {
    return false;
}

bool AMorRavenConstructionManager::GetSpawnRavenAtLastConstruction() const {
    return false;
}

int32 AMorRavenConstructionManager::GetLastSpawnedRavenConstructionId() const {
    return 0;
}

bool AMorRavenConstructionManager::GetHasBuiltRavenConstruction() const {
    return false;
}

bool AMorRavenConstructionManager::CanSpawnRavenAtConstruction(int32 ConstructionId) const {
    return false;
}

bool AMorRavenConstructionManager::AnyConstructionRecordExists() const {
    return false;
}

void AMorRavenConstructionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorRavenConstructionManager, ConstructionsData);
    DOREPLIFETIME(AMorRavenConstructionManager, ActiveConstructions);
}


