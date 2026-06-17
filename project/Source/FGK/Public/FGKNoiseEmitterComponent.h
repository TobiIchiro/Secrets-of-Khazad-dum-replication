#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "FGKNoiseEmitterComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKNoiseEmitterComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UFGKNoiseEmitterComponent(const FObjectInitializer& ObjectInitializer);

};

