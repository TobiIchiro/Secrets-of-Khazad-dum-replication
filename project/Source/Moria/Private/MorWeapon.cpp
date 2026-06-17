#include "MorWeapon.h"
#include "InscribedRuneComponent.h"

AMorWeapon::AMorWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InscribedRuneComponent = CreateDefaultSubobject<UInscribedRuneComponent>(TEXT("InscribedRune"));
    this->bCanInscribeRune = true;
}



EMorSurface AMorWeapon::GetSurfaceType(TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
    return EMorSurface::Stone_Natural;
}

EMorSurfaceCategory AMorWeapon::GetSurfaceCategory(TEnumAsByte<EPhysicalSurface> PhysicalSurface) {
    return EMorSurfaceCategory::Stone;
}

int32 AMorWeapon::GetBaseDamage() const {
    return 0;
}


