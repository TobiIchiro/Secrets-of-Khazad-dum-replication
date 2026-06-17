#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKVfxComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKVfxComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UFGKVfxComponent(const FObjectInitializer& ObjectInitializer);

};

