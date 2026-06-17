#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorShallowWaterDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorShallowWaterDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorShallowWaterDebugComponent(const FObjectInitializer& ObjectInitializer);

};

