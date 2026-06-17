#include "MorFXSpawnOnHitActor.h"

AMorFXSpawnOnHitActor::AMorFXSpawnOnHitActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsHitResultValid = false;
}

FHitResult AMorFXSpawnOnHitActor::GetPreciseHitResult(const FHitResult& OriginalHitResult) {
    return FHitResult{};
}


