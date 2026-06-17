#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MorAIWatcherBlockerVolume.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIWatcherBlockerVolume : public AVolume {
    GENERATED_BODY()
public:
    AMorAIWatcherBlockerVolume(const FObjectInitializer& ObjectInitializer);

};

