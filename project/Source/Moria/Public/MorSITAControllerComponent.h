#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorSITAControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorSITAControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorSITAControllerComponent(const FObjectInitializer& ObjectInitializer);

};

