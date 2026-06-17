#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ArchitectureProxyDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UArchitectureProxyDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UArchitectureProxyDebugComponent(const FObjectInitializer& ObjectInitializer);

};

