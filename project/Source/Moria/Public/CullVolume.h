#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "CullVolume.generated.h"

// Stub: ACullVolume does not exist in UE4.27 — this is a game-specific class
UCLASS(Blueprintable)
class MORIA_API ACullVolume : public AVolume {
    GENERATED_BODY()
public:
    ACullVolume(const FObjectInitializer& ObjectInitializer);
};
