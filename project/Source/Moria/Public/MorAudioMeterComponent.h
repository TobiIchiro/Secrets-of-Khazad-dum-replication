#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorAudioMeterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAudioMeterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMorAudioMeterComponent(const FObjectInitializer& ObjectInitializer);

};

