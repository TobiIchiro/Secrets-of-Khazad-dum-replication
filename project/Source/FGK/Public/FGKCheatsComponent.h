#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKCheatsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKCheatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFGKCheatsComponent(const FObjectInitializer& ObjectInitializer);

};

