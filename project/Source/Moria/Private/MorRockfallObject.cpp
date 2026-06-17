#include "MorRockfallObject.h"
#include "Components/SphereComponent.h"

AMorRockfallObject::AMorRockfallObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
    this->StartFallingAudio = NULL;
    this->ImpactAudio = NULL;
}

void AMorRockfallObject::BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I, bool bArg, const FHitResult& HitResult) {
}


