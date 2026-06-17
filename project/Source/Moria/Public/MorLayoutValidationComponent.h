#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorLayoutValidationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorLayoutValidationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorLayoutValidationComponent(const FObjectInitializer& ObjectInitializer);

};

