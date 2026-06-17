#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "MorProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UMorProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

