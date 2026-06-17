#include "MorRavenConstruction.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AMorRavenConstruction::AMorRavenConstruction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RavenLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RavenSpawnLocation"));
    this->RavenSpawned = NULL;
    this->RavenConstructionId = -1;
    this->RavenLocation->SetupAttachment(RootComponent);
}

void AMorRavenConstruction::RavenAssetLoaded() {
}

void AMorRavenConstruction::OnRepRavenSpawned() {
}

void AMorRavenConstruction::FinishConstructionDestroyClient_Implementation() {
}

void AMorRavenConstruction::ConstructionBroken(bool bPreRuined) {
}



void AMorRavenConstruction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMorRavenConstruction, RavenSpawned);
    DOREPLIFETIME(AMorRavenConstruction, RavenConstructionId);
}


