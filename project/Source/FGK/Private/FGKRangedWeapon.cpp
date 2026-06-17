#include "FGKRangedWeapon.h"
#include "Components/SphereComponent.h"

AFGKRangedWeapon::AFGKRangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeAmount = 1.00f;
    this->CurrentProjectileClass = NULL;
    this->ProjectileLocation = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileLocation"));
    this->ProjectileLocation->SetupAttachment(RootComponent);
}


