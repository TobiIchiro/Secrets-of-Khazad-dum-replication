#include "FGKCollectible.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"

AFGKCollectible::AFGKCollectible(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->HomingSpeed = 1000.00f;
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->RotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingComp"));
    this->CollisionComp = NULL;
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->Target = NULL;
    this->PickupComponent = NULL;
}

void AFGKCollectible::OnTargetReached(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AFGKCollectible::OnStop(const FHitResult& HitResult) {
}






