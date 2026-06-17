#pragma once
#include "CoreMinimal.h"
#include "MediaSoundComponent.h"
#include "MorMediaSoundComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorMediaSoundComponent : public UMediaSoundComponent {
    GENERATED_BODY()
public:
    UMorMediaSoundComponent(const FObjectInitializer& ObjectInitializer);

};

