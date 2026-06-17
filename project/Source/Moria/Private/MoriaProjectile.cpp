#include "MoriaProjectile.h"
#include "AkComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MorProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

AMoriaProjectile::AMoriaProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UMorProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CollisionProfileName = TEXT("Projectile");
    this->SpawnFX = NULL;
    this->HoldingTrailFX = NULL;
    this->FlyingTrailFX = NULL;
    this->FlyingStartSFX = NULL;
    this->FlyingStopSFX = NULL;
    this->ExplosionEffect = NULL;
    this->ExplosionSFX = NULL;
    this->DestructionEffect = NULL;
    this->DestructibleMesh = NULL;
    this->bDelayLaunch = false;
    this->HitsTeam = EHitsTeam::Both;
    this->SpawnActor = NULL;
    this->bOnlySpawnActorWhenHittingWorld = true;
    this->DestructImpulseRadius = 200.00f;
    this->DestructOutwardImpulseForce = 20000.00f;
    this->DestructReflectedVelocityExtraForce = 20000.00f;
    this->bHideModelOnImpact = true;
    this->bAttachOnImpact = false;
    this->DestructTime = -1.00f;
    this->TargetPenetration = 0;
    this->AmmoClassDefaultActor = NULL;
    this->AttackerActor = NULL;
    this->SpawnedHoldingTrailFX = NULL;
    this->SpawnedFlyingTrailFX = NULL;
    this->FailedMovesToConsiderEndOfFlight = 5;
    this->AkComponent->SetupAttachment(RootComponent);
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AMoriaProjectile::OnRep_AmmoClassDefaultActor() {
}

void AMoriaProjectile::OnProjectileImpact(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AMoriaProjectile::OnHitActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AMoriaProjectile::Multicast_Launch_Implementation(FVector Velocity, bool bShouldDetach, const TArray<AActor*>& IgnoreActors) {
}

void AMoriaProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMoriaProjectile, AmmoClassDefaultActor);
}


