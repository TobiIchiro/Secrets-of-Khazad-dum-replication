#include "FGKActionEffect_SetCollisionProfile.h"
#include "FGKBaseCharacter.h"

UFGKActionEffect_SetCollisionProfile::UFGKActionEffect_SetCollisionProfile() {
    this->OwnerClass = AFGKBaseCharacter::StaticClass();
    this->Duration = 0.00f;
}


