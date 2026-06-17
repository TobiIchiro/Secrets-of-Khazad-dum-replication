#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorLightshaftDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorLightshaftDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorLightshaftDebugComponent(const FObjectInitializer& ObjectInitializer);

};

