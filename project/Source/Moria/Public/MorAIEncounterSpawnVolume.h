#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MorAIEncounterSpawnVolume.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIEncounterSpawnVolume : public AVolume {
    GENERATED_BODY()
public:
    AMorAIEncounterSpawnVolume(const FObjectInitializer& ObjectInitializer);

};

