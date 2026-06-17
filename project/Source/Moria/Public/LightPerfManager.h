#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "LightPerfManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API ALightPerfManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
    ALightPerfManager(const FObjectInitializer& ObjectInitializer);

};

