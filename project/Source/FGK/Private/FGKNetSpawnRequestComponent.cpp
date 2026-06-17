#include "FGKNetSpawnRequestComponent.h"
#include "Templates/SubclassOf.h"

UFGKNetSpawnRequestComponent::UFGKNetSpawnRequestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AFGKProjectile* UFGKNetSpawnRequestComponent::SpawnProjectile(TSubclassOf<AFGKProjectile> Projectile, FVector Position, FRotator Rotation, const FFGKProjectileSpawnParameters& Params) {
    return NULL;
}

void UFGKNetSpawnRequestComponent::SpawnPlaceable(TSubclassOf<AFGKPlaceable> Placeable, FVector Position, FRotator Rotation, FVector Scale) {
}

void UFGKNetSpawnRequestComponent::Server_SpawnProjectile_Implementation(TSubclassOf<AFGKProjectile> Projectile, FVector Position, FRotator Rotation, const FFGKProjectileSpawnParameters& Params) {
}
bool UFGKNetSpawnRequestComponent::Server_SpawnProjectile_Validate(TSubclassOf<AFGKProjectile> Projectile, FVector Position, FRotator Rotation, const FFGKProjectileSpawnParameters& Params) {
    return true;
}

void UFGKNetSpawnRequestComponent::Server_SpawnPlaceable_Implementation(TSubclassOf<AFGKPlaceable> Placeable, FVector Position, FRotator Rotation, FVector Scale) {
}
bool UFGKNetSpawnRequestComponent::Server_SpawnPlaceable_Validate(TSubclassOf<AFGKPlaceable> Placeable, FVector Position, FRotator Rotation, FVector Scale) {
    return true;
}


