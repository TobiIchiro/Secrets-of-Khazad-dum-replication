#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FGKProjectileSpawnParameters.h"
#include "Templates/SubclassOf.h"
#include "FGKNetSpawnRequestComponent.generated.h"

class AFGKPlaceable;
class AFGKProjectile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKNetSpawnRequestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFGKNetSpawnRequestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AFGKProjectile* SpawnProjectile(TSubclassOf<AFGKProjectile> Projectile, FVector Position, FRotator Rotation, const FFGKProjectileSpawnParameters& Params);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPlaceable(TSubclassOf<AFGKPlaceable> Placeable, FVector Position, FRotator Rotation, FVector Scale);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnProjectile(TSubclassOf<AFGKProjectile> Projectile, FVector Position, FRotator Rotation, const FFGKProjectileSpawnParameters& Params);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnPlaceable(TSubclassOf<AFGKPlaceable> Placeable, FVector Position, FRotator Rotation, FVector Scale);
    
};

