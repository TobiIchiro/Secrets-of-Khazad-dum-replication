#include "FGKProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFGKProjectile::AFGKProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->InitialSpeed = 1500.00f;
    this->ChargedInitialSpeed = 1500.00f;
    this->MaxSpeed = 3000.00f;
    this->ExpireTime = 0.00f;
    this->BaseDamage = 1.00f;
    this->ChargedBaseDamage = 1.00f;
    this->ArcParam = 0.90f;
    this->ChargeAmount = 1.00f;
    this->Damage = 1.00f;
    this->bRotationFollowsVelocity = true;
    this->bCanBeStopped = false;
    this->bFireable = true;
    this->bLocal = false;
    this->bHit = false;
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->ItemDefinition = NULL;
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AFGKProjectile::StopMovement_Implementation(bool bPermanently) {
}

void AFGKProjectile::OnHit_Implementation(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFGKProjectile::OnCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

FVector AFGKProjectile::GetProjectileParabola(const AFGKProjectile* Projectile) {
    return FVector{};
}

float AFGKProjectile::GetProjectileInitialSpeed(const AFGKProjectile* Projectile, float NewChargeAmount) {
    return 0.0f;
}

float AFGKProjectile::GetProjectileGravity(const AFGKProjectile* Projectile) {
    return 0.0f;
}

FVector AFGKProjectile::GetProjectileClassParabola(const TSubclassOf<AFGKProjectile> ProjectileClass) {
    return FVector{};
}

float AFGKProjectile::GetProjectileClassInitialSpeed(const TSubclassOf<AFGKProjectile> ProjectileClass, float NewChargeAmount) {
    return 0.0f;
}

float AFGKProjectile::GetProjectileClassGravity(const TSubclassOf<AFGKProjectile> ProjectileClass) {
    return 0.0f;
}

AFGKProjectile* AFGKProjectile::GetConnected() const {
    return NULL;
}

void AFGKProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFGKProjectile, InitialSpeed);
    DOREPLIFETIME(AFGKProjectile, ChargedInitialSpeed);
    DOREPLIFETIME(AFGKProjectile, MaxSpeed);
    DOREPLIFETIME(AFGKProjectile, InitialVelocity);
}


