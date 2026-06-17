#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKAISpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKAISpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFGKAISpawnerComponent(const FObjectInitializer& ObjectInitializer);

};

