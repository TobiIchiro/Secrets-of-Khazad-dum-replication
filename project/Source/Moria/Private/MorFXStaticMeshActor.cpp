#include "MorFXStaticMeshActor.h"
#include "MorFXLocatorComponent.h"

AMorFXStaticMeshActor::AMorFXStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
    this->ImpactDustSystem = NULL;
    this->PostHitAttractorForceMagnitude = 100.00f;
    this->PostHitLinearHitDampening = 8.00f;
    this->MaxHitsBeforeDisable = 999;
    this->bEnableSpeedLimit = false;
    this->bIsEnabled = true;
    this->AttractorComponent = CreateDefaultSubobject<UMorFXLocatorComponent>(TEXT("Attractor"));
    this->AttractorComponent->SetupAttachment(RootComponent);
}

void AMorFXStaticMeshActor::StartPhysics() {
}

void AMorFXStaticMeshActor::EndPhysics() {
}

void AMorFXStaticMeshActor::ComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


