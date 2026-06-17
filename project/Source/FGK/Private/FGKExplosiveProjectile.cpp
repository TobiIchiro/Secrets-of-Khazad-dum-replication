#include "FGKExplosiveProjectile.h"
#include "FGKExplosionDamage.h"
#include "FGKExplosiveComponent.h"

AFGKExplosiveProjectile::AFGKExplosiveProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExplosionRadius = 200.00f;
    this->Falloff = 1.00f;
    this->ExplosionTravelSpeed = 0.00f;
    this->DamageType = UFGKExplosionDamage::StaticClass();
    this->ReactionIntensity = EFGKReactionIntensity::KnockBack;
    this->ReactionResult = EFGKReactionResult::OnFeet;
    this->bExplodeOnHit = true;
    this->bExplodeImmediately = false;
    this->ExplosiveComponent = CreateDefaultSubobject<UFGKExplosiveComponent>(TEXT("Explosive"));
    this->ExplosiveComponent->SetupAttachment(RootComponent);
}

void AFGKExplosiveProjectile::Multicast_Explode_Implementation(const FHitResult& Hit) {
}

void AFGKExplosiveProjectile::Explode_Implementation(const FHitResult& Hit) {
}


