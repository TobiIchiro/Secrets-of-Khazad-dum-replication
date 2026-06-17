#include "FGKAimState.h"
#include "Templates/SubclassOf.h"

UFGKAimState::UFGKAimState() {
}

bool UFGKAimState::IsTargetDirectionValid(const FVector& RayOrigin, const FVector& RayDirection, const FVector& TargetLocation) const {
    return false;
}

FVector UFGKAimState::GetProjectileOriginLocation() const {
    return FVector{};
}

FVector UFGKAimState::GetProjectileOriginDirection() const {
    return FVector{};
}

TSubclassOf<AFGKProjectile> UFGKAimState::GetCurrentProjectileClass() const {
    return NULL;
}


