#pragma once
#include "CoreMinimal.h"
#include "MorWaterColliderGroupComponent.h"
#include "MorWatcherFXComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorWatcherFXComponent : public UMorWaterColliderGroupComponent {
    GENERATED_BODY()
public:
    UMorWatcherFXComponent(const FObjectInitializer& ObjectInitializer);

};

